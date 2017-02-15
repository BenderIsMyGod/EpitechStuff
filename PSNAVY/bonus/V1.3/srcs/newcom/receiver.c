/*
** receiver.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/newcom/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Feb 11 11:00:59 2017 John Doe
** Last update Sat Feb 11 21:59:56 2017 John Doe
*/

#include "navy.h"
#include <signal.h>

#define SET_O(pos) (0 << pos)
#define SET_ONE(pos) (1 << pos)

void swap(char *xp, char *yp)
{
    *xp ^= *yp;
    *yp = *xp ^ *yp;
    *xp ^= *yp;
}

void		print_message(void)
{
  p_printf(1, "[t'est dans print_message]\n");
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
	  update_map(check_hit(proto.ptr.map), proto.ptr.map, 1);
	  affich_map(proto.ptr.map);
    sender(proto.ptr.sender_pid, *proto.oldact);
	  send_message(check_hit(proto.ptr.map), proto.ptr.sender_pid, \
		       *proto.oldact);
	  p_printf(1, "toto\n");
	}
      proto.ptr.bfr[0] = '\0';
      proto.count = 0;
    }
}
/* ******************************* */

void		receive_msg(int signum, siginfo_t *info, void *context)
{
  if (info->si_pid == proto.ptr.sender_pid)
    {
      if (signum == SIGUSR1)
	{
	  proto.ptr.message |= SET_O(proto.pos);
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
	  print_message();
	  proto.ptr.message = '\0';
	  proto.pos = 0;
	}
    }
}

int			receiver(struct sigaction oldact)
{
  struct sigaction cli;

  cli.sa_sigaction = receive_msg;
  sigemptyset(&cli.sa_mask);
  cli.sa_flags = SA_SIGINFO;
  sigaction(SIGUSR1, &oldact, NULL);
  sigaction(SIGUSR2, &oldact, NULL);
  p_printf(1, "[t'est dans int receiver]\n");
  while (proto.count != 3)
    {
      sigaction(SIGUSR1, &cli, &oldact);
      sigaction(SIGUSR2, &cli, &oldact);
      pause();
    }
  return (0);
}
