/*
** main.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 09:23:53 2017 John Doe
** Last update Fri Feb 10 09:24:00 2017 John Doe
*/

#include "navy.h"
#include <signal.h>

struct count proto = {{0, 0, {0}}, 0, 0};

void		initcom(int signum, siginfo_t *info, void *context)
{
  if (signum == SIGUSR1 || signum == SIGUSR2)
    p_printf(1, "enemy connected\n\n");
  proto.ptr.sender_pid = info->si_pid;
}

int			receiver(void)
{
  struct sigaction cli;
  struct sigaction init;
  int		 c;

  cli.sa_sigaction = receive_msg;
  init.sa_sigaction = initcom;
  sigemptyset(&cli.sa_mask);
  sigemptyset(&init.sa_mask);
  cli.sa_flags = init.sa_flags = SA_SIGINFO;
  p_printf(1, "My pid:  %d\n", getpid());
  p_printf(1, "waiting for ennemy connection...\n");
  sigaction(SIGUSR1, &init, NULL);
  sigaction(SIGUSR2, &init, NULL);
  while (read(0, &c, 1))
    {
      sigaction(SIGUSR1, &cli, &init);
      sigaction(SIGUSR2, &cli, &init);
    }
  return (0);
}

int			sender(char *pid)
{
  char	*cmd;
  unsigned int  message[4];
  int			i;

  i = 0;
  message[0] = 0;
  kill(my_atoi(pid), SIGUSR1);
  p_printf(1, "My pid :[%d]\n%s", getpid(), "attack: ");
  while ((cmd = get_next_line(0)))
{
      message[0] = cmd[0];
      message[1] = cmd[1];
      while (i != 2)
	{
    message[i] ^= END_TRANSMISSION(9, 10);
    p_printf(1, "[%c]\n", message[i]);
	  send_message(message[i], my_atoi(pid));
	  i = i + 1;
	}
      i = 0;
      *message = 0;
      p_printf(1, "\x1B[0mattack: ");
      p_printf(1, "\x1B[3m");
      free(cmd);
    }
  return (0);
}

int			main(int ac, char **av)
{
  if (ac == 2)
    sender(av[1]);
  else if (ac == 1)
    receiver();
  return (0);
}
