/*
** main.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 09:23:53 2017 John Doe
** Last update Wed Feb 15 09:58:37 2017 John Doe
*/

#include "navy.h"
#include <signal.h>

/*
** Parse user input expression
** and return 1 if values are good
** zero otherwise.
*/
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
/*
** Get user input expression
** and return 1 if values are
** and message sent.
** zero otherwise.
*/
int			sender(int pid, struct sigaction oldact)
{
  char	*cmd;

  p_printf(1, "\x1B[0mattack: ");
  p_printf(1, "\x1B[3m");
  while ((cmd = get_next_line(0)))
{
      if ((isokcmd(cmd)) && len(cmd) == 2)
	{
    send_message((const char*)cmd, pid, oldact);
    return (1);
	}
      else
	p_printf(1, "wrong position\n");
      p_printf(1, "\x1B[0mattack: ");
      p_printf(1, "\x1B[3m");
      free(cmd);
    }
  return (0);
}
