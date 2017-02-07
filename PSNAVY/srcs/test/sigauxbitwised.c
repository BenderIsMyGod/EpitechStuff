/*
** sigauxbitwised.c for PSU_2016_ncoordy in /home/bender/snippets/bitwise/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Feb  6 18:03:48 2017 John Doe
** Last update Tue Feb  7 14:57:33 2017 John Doe
*/

#include "navy.h"
#include <string.h>

const char 		*byte_to_binary(unsigned int x)
{
  int 				z;
  static char b[17];
  b[0] = '\0';

  z = 512;
  while (z > 0)
    {
      my_strcatvs(b, ((x & z) == z) ? "1" : "0");
      z >>= 1;
    }
  return (b);
}
void					send_message(unsigned int message, int pid)
{
  int					k;
  const char *bfr;

  k = 13;
  bfr = byte_to_binary(message);
  while (k != -1)
    {
      if (bfr[k] == '0')
	{
	  usleep(6);
	  write(1, "0 ", 2);
	  kill(pid, SIGUSR1);
	}
      else if (bfr[k] == '1')
	{
	  usleep(6);
	  write(1, "1 ", 2);
	  kill(pid, SIGUSR2);
	}
      k--;
    }
  write(1, "\n", 1);
}

int			cli(void)
{
  struct sigaction cli;

  cli.sa_sigaction = handler_cli;
  sigemptyset(&cli.sa_mask);
  cli.sa_flags = SA_SIGINFO;
  p_printf(1, "My pid :[%d]\n", getpid());
  write(1, "waiting for signal\n", 19);
  while (1)
    {
      usleep(4);
      sigaction(SIGUSR1, &cli, NULL);
      sigaction(SIGUSR2, &cli, NULL);
    }
  return (0);
}

int			serv(char *pid)
{
  char					*cmd;
  unsigned int   message;
  write(1, "CMD : ", 6);
  message = 0;
  while ((cmd = get_next_line(0)))
{
      message = *cmd;
      message ^= END_TRANSMISSION;
      write(1, &message, 1);
      p_printf(1, "\n%s\n", byte_to_binary(message));
      send_message(message, my_atoi(pid));
      write(1, "CMD : ", 6);
      message = 0;
      free(cmd);
    }
  return (0);
}
