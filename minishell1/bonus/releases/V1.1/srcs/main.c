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


  i = parse_env(environ, arg);
  if ((i))
    {
      environ[i] = value;
      return (environ);
    }
  errors("No such environnement");
  return (NULL);
}

int							main(int ac, char **av, char **environ)
{
  if ((!av[1]))
    if ((environ))
	{
	  signal(SIGINT, SIG_IGN);
	  if ((isatty(0)))
	    pprint(PROMPT, 1);
	  if (!getuid())
	    pprint(ROOT_ERR, 1);
	  environ = set_env(environ, "SHELL", NAME);
	  environ = set_env(environ, "LS_OPT", LS);
	  while (ac)
	    {
		  loop(environ);
	      return (0);
	    }
	  return (0);
	}

  if ((execve(av[1], av, environ)))
    errors("No such file or directory");
  return (84);
}
