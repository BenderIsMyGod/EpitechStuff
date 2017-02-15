/*
** pingpong.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/game/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Feb 11 11:53:39 2017 John Doe
** Last update Wed Feb 15 10:21:31 2017 John Doe
*/

#include "navy.h"

/*
** Signal handler for
** waitfor* function group
** pingpong method.
*/
void			initcom(int signum, siginfo_t *info, void *context)
{
  if (signum == SIGUSR1)
    {
      proto.turn += 1;
      if (proto.turn == 1)
	{
	  p_printf(1, "enemy connected\n\n");
	  proto.turn += 1;
	  kill(info->si_pid, SIGUSR2);
	}
    }
  else if (signum == SIGUSR2)
    {
      proto.turn += 1;
      if (proto.turn == 1)
	p_printf(1, "successfully connected\n\n");
    }
  proto.ptr.sender_pid = info->si_pid;
}

/*
** Signal handler for sender function group
** (pingpong method).
** Update counters in struct regarding the
** number of signal(bits) received.
*/
void		pphandler(int signum, siginfo_t *info, void *context)
{
  static int p1 = 0;
  static int p2 = 0;

  if (signum == SIGUSR1)
    p1++;
  else if (signum == SIGUSR2)
    p2++;
  if (p1 + p2 == 20)
    {
      // p_printf(1, "%s\n", "21 signaux reçus\n");
      // receiver(*proto.oldact);
    }
}
