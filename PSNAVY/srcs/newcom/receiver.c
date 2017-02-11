/*
** receiver.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/newcom/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Feb 11 11:00:59 2017 John Doe
** Last update Sat Feb 11 11:01:06 2017 John Doe
*/

#include "navy.h"
#include <signal.h>

#define SET_O(pos) (0 << pos)
#define SET_ONE(pos) (1 << pos)

/*
** The function below is for now a simple message printer
** with message parsing (swap if coord in wrong order,
**	and capitalize it if not)
** But will become the main message transmitter to the
** check for win or loose function
*/
void swap(char *xp, char *yp)
{
    *xp ^= *yp;
    *yp = *xp ^ *yp;
    *xp ^= *yp;
}
void		print_message(void)
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
    p_printf(1, "%s: %s\n", proto.ptr.bfr, check_hit(proto.ptr.map));
	  update_map(check_hit(proto.ptr.map), proto.ptr.map);
	  affich_map(proto.ptr.map);
	}
      proto.ptr.bfr[0] = '\0';
      proto.count = 0;
    }
}
/* ******************************* */

void		initcom(int signum, siginfo_t *info, void *context)
{
  if (signum == SIGUSR1)
    {
      p_printf(1, "enemy connected\n\n");
      kill(info->si_pid, SIGUSR2);
    }
  else if (signum == SIGUSR2)
    p_printf(1, "successfully connected\n\n");
  proto.ptr.sender_pid = info->si_pid;
}

void		receive_msg(int signum, siginfo_t *info, void *context)
{
  if (signum == SIGUSR1)
    {
      proto.ptr.message |= SET_O(proto.pos);
      proto.pos++;
    }
  else if (signum == SIGUSR2)
    {
      proto.ptr.message |= SET_ONE(proto.pos);
      proto.pos++;
    }
  if ((proto.pos == 10) && (proto.ptr.message & END_TRANSMISSION(9, 10)))
    {
      proto.ptr.bfr[proto.count++] = proto.ptr.message;
      print_message();
      proto.ptr.message = '\0';
      proto.pos = 0;
    }
}

int			receiver(struct sigaction oldact)
{
  struct sigaction cli;
  int		 c;

  c = 0;
  cli.sa_sigaction = receive_msg;
  sigemptyset(&cli.sa_mask);
  cli.sa_flags = SA_SIGINFO;
  sigaction(SIGUSR1, &oldact, NULL);
  sigaction(SIGUSR2, &oldact, NULL);
  while (read(0, &c, 1))
    {
      sigaction(SIGUSR1, &cli, &oldact);
      sigaction(SIGUSR2, &cli, &oldact);
    }
  return (0);
}
