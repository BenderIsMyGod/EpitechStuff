/*
** receiver.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/newcom/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Feb 11 11:00:59 2017 John Doe
** Last update Wed Feb 15 10:23:17 2017 John Doe
*/

#include "navy.h"
#include <signal.h>

/*
** Macro for bits left shift
** traducing binary sigals
** usr1 = 0 & usr2 = 1 in
** their ascii values.
*/
#define SET_ONE(pos) (1 << pos)
/*
** swap values with XOR
** if coords sent in
** reverse order.
*/
void swap(char *xp, char *yp)
{
    *xp ^= *yp;
    *yp = *xp ^ *yp;
    *xp ^= *yp;
}
/*
** print received message
** and update/printing map
** accordingly.
*/
int		print_message(void)
{
  p_printf(1, "%s: %s\n", proto.ptr.bfr, check_hit(proto.ptr.map));
  update_map(check_hit(proto.ptr.map), proto.ptr.map, 1);
  affich_map(proto.ptr.map);
  return (0);
}
/*
** Analyse struct counters
** to stop reception
** when valid message received
*/
int		check_message(void)
{
  if (proto.count == 2)
    {
      proto.ptr.bfr[proto.count + 1] = '\0';
      if ((is_num(proto.ptr.bfr[0])))
	swap(&proto.ptr.bfr[0], &proto.ptr.bfr[1]);
      if ((is_lwcse(proto.ptr.bfr[0])))
	proto.ptr.bfr[0] -= 32;
      if ((isokcmd(proto.ptr.bfr)))
	{
    print_message();
    sender(proto.ptr.sender_pid, *proto.oldact);
	  send_message(check_hit(proto.ptr.map), proto.ptr.sender_pid, \
		       *proto.oldact);
	  return (0);
	}
      proto.ptr.bfr[0] = '\0';
      proto.count = 0;
    }
  return (0);
}
/*
** Signal handler who receive
** the "pseudo binary" message.
** Setting bit at one on good position
** on the unsigned int who encode the message.
** (with the help of the below macro).
*/
void		receive_msg(int signum, siginfo_t *info, void *context)
{
  if (signum == SIGUSR1)
    {
      proto.pos++;
      kill(proto.ptr.sender_pid, SIGUSR2);
    }
  else if (signum == SIGUSR2)
    {
      proto.ptr.message |= SET_ONE(proto.pos);
      proto.pos++;
      kill(proto.ptr.sender_pid, SIGUSR1);
    }
  if ((proto.pos == 10) && (proto.ptr.message & END_TRANSMISSION(9, 10)))
    {
      proto.ptr.bfr[proto.count++] = proto.ptr.message;
      check_message();
      proto.ptr.message = '\0';
      proto.pos = 0;
    }
}
/*
** Main receive handler function.
** check counter and gather the
** signal with sigaction.
** (Note : thread "paused" to avoid
** cpu overcharge.)
*/
int			receiver(struct sigaction oldact)
{
  struct sigaction cli;

  cli.sa_sigaction = receive_msg;
  sigemptyset(&cli.sa_mask);
  cli.sa_flags = SA_SIGINFO;
  sigaction(SIGUSR1, &oldact, NULL);
  sigaction(SIGUSR2, &oldact, NULL);
  while (proto.count != 3)
    {
      sigaction(SIGUSR1, &cli, &oldact);
      sigaction(SIGUSR2, &cli, &oldact);
      pause();
    }
  return (0);
}
