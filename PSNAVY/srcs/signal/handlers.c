/*
** handlers.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/v1.1/srcs/signal/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Wed Feb  1 18:50:50 2017 John Doe
** Last update	Sun Feb 05 22:39:54 2017 Full Name
*/

#include "navy.h"

void			handler_client(int signum, siginfo_t *ptr, void *bfr)
{
  static int usr1 = 0;
  static int usr2 = 0;
  char			 cvrt1;
  char			 cvrt2;

  if (signum == SIGUSR1)
    usr1++;
  else if (signum == SIGUSR2)
    {
      usr2++;
      if (usr2 == 1)
	p_printf(1, "successfully connected\n\n", ptr->si_pid);
    }
  if ((cvrt1 = usr1 + '0') >= 'A' && (cvrt2 = usr2 + '0') >= '1')
    {
      cvrt1 = usr1 + '0';
      cvrt2 = usr2 + '0';
      p_printf(1, "COORDINATES: [%c][%c]\n", cvrt1, cvrt2);
      usr1 = 0;
      usr2 = 2;
    }
}
void 			handler_server(int signum, siginfo_t *ptr, void *bfr)
{
  static int usr1 = 0;
  static int usr2 = 0;
  char			 cvrt1;
  char			 cvrt2;

  if (signum == SIGUSR1)
    {
      usr1++;
      if (usr1 == 1)
	{
	  p_printf(1, "enemy connected\n\n", ptr->si_pid);
	  kill(ptr->si_pid, SIGUSR2);
	}
    }
  else if (signum == SIGUSR2)
    usr2++;
  if ((cvrt1 = usr1 + '0') >= 'A' && (cvrt2 = usr2 + '0') >= '1')
    {
      cvrt1 = usr1 + '0';
      cvrt2 = usr2 + '0';
      p_printf(1, "COORDINATES: [%c][%c]\n", cvrt1, cvrt2);
      usr1 = 2;
      usr2 = 0;
    }
}
