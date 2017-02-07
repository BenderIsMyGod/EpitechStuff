/*
** sigauxbitwised.c for PSU_2016_ncoordy in /home/bender/snippets/bitwise/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Feb  6 18:03:48 2017 John Doe
** Last update Tue Feb  7 00:56:27 2017 John Doe
*/

#include "test.h"
#include <string.h>

const char *byte_to_binary(unsigned short x)
{
  int 	z;
  static char b[14];
  b[0] = '\0';

  z = 256;
  while (z > 0)
    {
      strcat(b, ((x & z) == z) ? "1" : "0");
      z >>= 1;
    }
  return (b);
}
void					send_message(unsigned short message, int pid)
{
  int					k;
  const char *bfr;

  k = 13;
  bfr = byte_to_binary(message);
  while (k != -1)
    {
      if (bfr[k] == '0')
	{
	  usleep(1);
	  write(1, "0 ", 2);
	  kill(pid, SIGUSR1);
	}
      else if (bfr[k] == '1')
	{
	  usleep(1);
	  write(1, "1 ", 2);
	  kill(pid, SIGUSR2);
	}
      k--;
    }
  write(1, "\n", 1);
}
// int			main(void)
// {
//   unsigned char msg;
//   msg = DECTOBCD('A');
//   msg |= END_TRANSMISSION;
//   p_printf("binaire : %s, char %c\n", byte_to_binary(msg), BCDMAKE(msg));
//   return (0);
// }
int			main(int ac, char **av)
{
  if (ac >= 2)
    {
      char	*cmd;
      unsigned char   message;
      write(1, "CMD : ", 6);
      message = 0;
      while ((cmd = get_next_line(0)))
	{
	  message = DECTOBCD(*cmd);
	  message = BCDMAKE(message);
	  message |= END_TRANSMISSION;
	  write(1, &message, 1);
	  write(1, "\n", 1);
	  send_message(message, atoi(av[1]));
	  write(1, "CMD : ", 6);
	  message = 0;
	  free(cmd);
	}
      return (0);
    }
  struct sigaction cli;

  cli.sa_sigaction = handler_cli;
  sigemptyset(&cli.sa_mask);
  cli.sa_flags = SA_SIGINFO;
  printf("My pid :[%d]\n", getpid());
  write(1, "waiting for signal\n", 19);
  while (1)
    {
        usleep(10);
      sigaction(SIGUSR1, &cli, NULL);
      sigaction(SIGUSR2, &cli, NULL);
    }
  return (0);
}
