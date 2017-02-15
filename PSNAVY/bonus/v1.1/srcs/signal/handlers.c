/*
** handlers.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/v1.1/srcs/signal/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Wed Feb  1 18:50:50 2017 John Doe
** Last update Wed Feb  1 20:25:37 2017 John Doe
*/

#include "navy.h"

int				client_pid = 0;

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
	p_printf(1, "successfully connected\n\n");
    }
  else if (signum == SIGQUIT)
    {
      cvrt1 = usr1 + '0';
      cvrt2 = usr2 + '0';
      p_printf(1, "COORDINATES: [%c][%c]\n", cvrt1, cvrt2);
      exit (0);
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
	  p_printf(1, "enemy connected with pid [%d]\n\n", ptr->si_pid);
	  client_pid = ptr->si_pid;
	  kill(ptr->si_pid, SIGUSR2);
	}
    }
  else if (signum == SIGUSR2)
    usr2++;
  else if (signum == SIGQUIT)
    {
      cvrt1 = usr1 + '0';
      cvrt2 = usr2 + '0';
      p_printf(1, "COORDINATES: [%c][%c]\n", cvrt1, cvrt2);
      exit (0);
    }
}
