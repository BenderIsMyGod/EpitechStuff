/*
** main.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 09:23:53 2017 John Doe
** Last update Fri Feb 10 11:38:37 2017 John Doe
*/

#include "navy.h"
#include <signal.h>

int			sender(char *pid)
{
  char	*cmd;
  unsigned int  message[4];
  int			i;

  i = 0;
  message[0] = 0;
  kill(my_atoi(pid), SIGUSR1);
  p_printf(1, "My pid:  %d\n%s", getpid(), "attack: ");
  while ((cmd = get_next_line(0)))
{
      message[0] = cmd[0];
      message[1] = cmd[1];
      while (i != 2)
	{
    message[i] ^= END_TRANSMISSION(9, 10);
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
