/*
** main.c for PShellV2 in /home/bender/Desktop/Snippets/bookv2/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Dec 23 21:02:14 2016 John Doe
** Last update	Mon Jan 02 17:08:07 2017 Full Name
*/

#include "pshell.h"
#include <errno.h>

char			**set_env(char **environ, char  *arg, char *value)
{
  int			i;
  char		**tenv;
  char		*tmp;

  i = parse_env(environ, arg);
  if ((i))
    {
      environ[i] = value;
      return (environ);
    }
  tmp = my_strcat(TPATH, " ");
  tenv = strtowordtab(tmp, '\n');
  return (tenv);
}

int							main(int ac, char **av, char **environ)
{
  if ((!av[1]) && ac == 1)
    {
      signal(SIGINT, SIG_IGN);
      if ((isatty(0)))
	pprint(PROMPT, 1);
      if (!(environ[0]))
	return (84);
      loop(environ);
      return (0);
    }
  else
  if ((execve(av[1], av, environ)))
    errors("No such file or directory");
  return (0);
}
