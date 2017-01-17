/*
** minishell1.c for Minishell1 in /home/bender/Repo/PSU_2016_minishell1/v1.2/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Jan 17 19:39:33 2017 John Doe
** Last update Tue Jan 17 22:29:27 2017 John Doe
*/

#include "shell1.h"

#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int				find_inenv(char **env, const char *str)
{
  int		i;

  i = 0;
  while (env[i])
    {
      if ((strn_cmp(env[i], str, len(str))))
	return (i);
      i++;
    }
  return (0);
}

int				findgoodpath(const char *name, char **paths)
{
  int			pos;

  pos = 0;
  while (paths[pos] != NULL)
    {
      paths[pos] = my_strcat(paths[pos], "/");
      if ((check_thatbinary(my_strcat(paths[pos], name))) == 0)
	return (pos);
      pos++;
    }
  return (-1);
}
int				forkandrun(int pid, int *wstatus, \
					   char **paths, char **args, char **env)
{
  int			way;

  if ((pid = fork()) == -1)
    errors("fork error", 84);
  while ((waitpid(pid, wstatus, 0)) == -1)
    {
      if ((way = findgoodpath(args[0], paths)) == -1)
	errors(my_strcat(args[0], NOEXEC), 1);
      if ((execve(my_strcat(paths[way], args[0]), args, env)) == -1)
	errors(my_strcat(args[0], NOEXEC), 1);
    }
  return (0);
}

int				exec_that(char **environ)
{
  t_shell list;

  init_shell(&list, environ);
  while ((list.user_input = get_next_line(0)))
    {
      pprint("> ", 1);
      list.args = strto_wordtab(list.user_input, " ");
      forkandrun(list.pid, list.wstatus, list.paths, \
		 list.args, list.t_env);
      free(list.user_input);
      pprint("> ", 1);
    }
  return (0);
}

void	init_shell(t_shell *list, char **environ)
{
  int path;

  path = 0;
  list->tmpenv = my_strdup(TENV);
  list->pid = 0;
  list->wstatus = 0;
  if (!(environ[0]))
    {
      list->t_env = strto_wordtab(list->tmpenv, " ");
      list->paths = strto_wordtab(list->t_env[0] + len("PATH="), ":");
    }
  else
	{
	  path = find_inenv(environ, "PATH=");
    list->t_env = environ;
    list->paths = strto_wordtab(environ[path] + len("PATH="), ":");
	}
}
