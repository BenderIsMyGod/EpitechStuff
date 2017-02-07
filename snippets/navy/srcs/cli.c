/*
** cli.c for PSU_2016_Navy in /home/bender/snippets/navy/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Feb  2 12:31:00 2017 John Doe
** Last update Thu Feb  2 15:14:44 2017 John Doe
*/

#include "cli.h"

void			cli_handler(int signum, siginfo_t *ptr, void *bfr)
{
  static  char	*a = " ABCDEFGH";
  static  int   b;

  if (signum == SIGUSR1)
    {
      a++;
      p_printf(1, "SIGUSR1 received from [%d]\n", ptr->si_pid);
      ennemy_pid = ptr->si_pid;
      kill(ptr->si_pid, SIGUSR2);
    }
  else if (signum == SIGUSR2)
    {
      b++;
      p_printf(1, "SIGUSR2 received from [%d]\n", ptr->si_pid);
      kill(ptr->si_pid, SIGUSR1);
    }
  if (signum == SIGQUIT)
    {
      p_printf(1, "Envoyé : [%c][%d]\n", *a, b);
      exit (0);
    }
}
int			main(int ac, char **av)
{
  struct sigaction cli;

  cli.sa_sigaction = cli_handler;
  sigfillset(&cli.sa_mask);
  cli.sa_flags = SA_SIGINFO;
  p_printf(1, "My pid : [%d]\n", getpid());
  p_printf(1, "Sending ok to server\n");
  while ((42))
    {
      kill(my_atoi(av[1]), SIGUSR1);
      sigaction(SIGUSR2, &cli, NULL);
      sigaction(SIGUSR1, &cli, NULL);
      sigaction(SIGQUIT, &cli, NULL);
      while (sleep(20) != 0)
	{
    sigaction(SIGUSR2, &cli, NULL);
	  sigaction(SIGUSR1, &cli, NULL);
	  sigaction(SIGQUIT, &cli, NULL);
	}
    }
  return (0);
}
