/*
** main.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 09:23:53 2017 John Doe
** Last update Sat Feb 11 10:30:07 2017 John Doe
*/

#include "navy.h"
#include <signal.h>

int			isokcmd(char *cmd)
{
  int		i;
  int		ok;
  const char  *legitchar;

  ok = i = 0;
  legitchar = "ABCDEFGHabcdefgh12345678";
  while (legitchar[i])
    {
      if (cmd[0] == legitchar[i])
	ok++;
      if (cmd[1] == legitchar[i])
	ok++;
      i++;
    }
  if (ok == 2)
    return (1);
  return (0);
}
int			sender(int pid)
{
  char	*cmd;

  p_printf(1, "\x1B[0mattack: ");
  p_printf(1, "\x1B[3m");
  while ((cmd = get_next_line(0)))
{
      if ((isokcmd(cmd)) && len(cmd) == 2)
	send_message(cmd, pid);
      else
	p_printf(1, "wrong position\n");
      p_printf(1, "\x1B[0mattack: ");
      p_printf(1, "\x1B[3m");
      free(cmd);
    }
  return (0);
}
