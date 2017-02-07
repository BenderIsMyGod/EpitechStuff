/*
** serv.c for PSU_2016_navy in /home/bender/snippets/navy/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Feb  2 12:31:20 2017 John Doe
** Last update Mon Feb  6 08:08:58 2017 John Doe
*/

#include "serv.h"

void			serv_handler(int signum, siginfo_t *ptr, void *bfr)
{
  static 	char		*a = " ABCDEFGH";
  unsigned  		  ctrl = 0;
  static 	int   	b = 0;

  if (signum == SIGUSR1)
    {
      a++;
      ctrl = ctrl >> 1;
    }
  else if (signum == SIGUSR2)
    {
      b++;
      ctrl  = ctrl >> 1;
    }
  if (signum == SIGQUIT)
    {
      p_printf(1, "Recu : %c%d, ctrl [%d]\n", *a, b, ctrl);
      b = 0;
      a = " ABCDEFGH";
    }
}
int			main(void)
{
  struct sigaction serv;

  serv.sa_sigaction = serv_handler;
  serv.sa_flags = SA_RESTART | SA_SIGINFO;
  sigfillset(&serv.sa_mask);
  p_printf(1, "My pid : [%d]\n", getpid());
  while (1)
    {
      sigaction(SIGUSR2, &serv, NULL);
      sigaction(SIGUSR1, &serv, NULL);
      sigaction(SIGQUIT, &serv, NULL);
    }
  return (0);
}
