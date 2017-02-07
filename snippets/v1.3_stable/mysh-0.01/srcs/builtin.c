/*
** builtin.c for V1.3_stable in /home/bender/snippets/v1.3_stable/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 30 00:35:33 2017 John Doe
** Last update Mon Jan 30 12:18:18 2017 John Doe
*/

#include <stdlib.h>
#include "../include/libfunk.h"
#include "../include/shell.h"

int			my_exit(char **args)
{
  int		exitval;

  exitval = 0;
  if ((args[1]) && (my_stringisnum(args[1])))
    {
      if ((isatty(STDIN_FILENO)))
	p_printf(1, "exit\n");
      exitval = my_atoi(args[1]);
      clean_free(*args);
      free(args);
      exit (exitval);
    }
  else if ((args[1]))
{
      p_printf(2, "%s: Expression Syntax.\n", args[0]);
      return (1);
    }
  else if (!(args[1]))
    {
      if ((isatty(STDIN_FILENO)))
	p_printf(1, "exit\n");
      clean_free(*args);
      free(args);
      exit (EXIT_SUCCESS);
    }
  return (0);
}

int			built_in(char **args)
{
  if ((strn_cmp(args[0], "cd", 3)))
{
      if ((chdir(args[1])) == -1)
	p_printf(2, "%s: No such file or directory.\n", args[1]);
      return (1);
  }
  else if ((strn_cmp(args[0], "exit", 5)))
    {
      if ((my_exit(args)))
	return (1);
    }
  else if ((strn_cmp(args[0], "clear", 6)))
{
      p_printf(1, "\033[H\033[J");
      return (1);
  }
  return (0);
}
