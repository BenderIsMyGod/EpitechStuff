/*
** built_inmatch.c for builtinmatch in /home/bender/Repo/PSU_2016_minishell1/v1.2/srcs/built_in/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Jan 17 23:49:52 2017 John Doe
** Last update	Sat Jan 21 10:58:35 2017 Full Name
*/

#include "../include/shell1.h"

void	get_out(int exitval)
{
  if ((isatty(0)))
    pprint("exit\n", 1);
  exit (exitval);
}
int		built_in(char *user_input, char **environ)
{
  if ((strn_cmp("exit", user_input, 4)))
    get_out(my_atoi(user_input + len("exit") + 1));
  if ((strn_cmp("setenv", user_input, 6)))
    {
      if ((environ = set_environ(user_input, environ)))
	return (0);
      return (1);
    }
  if ((strn_cmp("unsetenv", user_input, 8)))
    {
      if ((environ = unset_environ(user_input, environ)))
	return (0);
      return (1);
    }
  if ((strn_cmp("cd", user_input, 2)))
    {
      if ((change_path(user_input, environ)))
	return (1);
      return (0);
    }
  return (1);
}
