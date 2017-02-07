/*
** main.c for V1.3-stable in /home/bender/snippets/v1.3_stable/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sun Jan 29 13:05:03 2017 John Doe
** Last update Mon Jan 30 11:41:42 2017 John Doe
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "../include/libfunk.h"
#include "../include/shell.h"

int			my_exec(char **args, char **environ)
{
  int		status;
  pid_t pid;
  int		i;

  i = 0;
  if ((pid = fork()) == -1)
    errors("fork error", 84);
  if (pid > 0)
    waitpid(pid, &status, WUNTRACED | WCONTINUED);
  else
    {
      if ((execve(args[0], args, environ)) == -1)
	{
	  p_printf(2, "%s: Command not found.\n", args[0]);
	  exit (EXIT_FAILURE);
	}
      exit (EXIT_SUCCESS);
    }
  check_status(&status);
  while (args[i])
    clean_free(args[i++]);
  free(args);
  return (0);
}

int			main(int ac, char **av, char **env)
{
  char 	*s;
  char	**ss;

  signal(SIGINT, SIG_IGN);
  if (ac <= 1 && av[1] == NULL)
    {
      if ((isatty(0)))
	p_printf(1, "42sh >> ");
      while ((s = get_next_line(STDIN_FILENO)))
	{
	  s = clean_args(s);
	  ss = strto_wordtab(s, " ");
	  clean_free(s);
	  if (!(built_in(ss)))
	    my_exec(ss, env);
	  if ((isatty(0)))
	    p_printf(1, "42sh >> ");
	}
      if ((isatty(0)))
	p_printf(1, "exit");
      return (EXIT_SUCCESS);
    }
  return (EXIT_SUCCESS);
}
