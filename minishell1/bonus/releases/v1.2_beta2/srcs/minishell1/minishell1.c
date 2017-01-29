/*
** minishell1.c for Minishell1 in /home/bender/Repo/PSU_2016_minishell1/v1.2/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Jan 17 19:39:33 2017 John Doe
** Last update	Sat Jan 21 15:54:16 2017 Full Name
*/

#include "shell1.h"
#include "errors.h"

#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int				forkandrun(t_shell *list, char **env)
{
  int			way;

  if ((way = findgoodpath(list->args[0], list->paths)) == -1)
    return (p_exit(my_strcat(list->args[0], NOEXEC), 1));
  if ((list->pid = fork()) == -1)
    errors(strerror(errno), 84);
  while ((waitpid(list->pid, list->wstatus, 0)) == -1)
    {
      if ((execve(my_strcat(list->paths[way], list->args[0]), list->args, env)\
	   == -1) && (execve(list->args[0], list->args, env)) < 0)
	{
	  if ((errno = 13))
	    errors(my_strcat(list->args[0], NOPERM), 1);
	  errors(my_strcat(strerror(errno), "\n"), 1);
	  return (1);
	}
    }
  return (0);
}

int				exec_that(char **environ)
{
  t_shell list;
  t_shell *ptr;
  static int	ctrl = 0;
  char		**t_env;

  t_env = init_shell(&list, environ);
  ptr = &list;
  signal(SIGINT, SIG_IGN);
  while ((list.user_input = clean_args(get_next_line(0))))
    {
      if ((built_in(list.user_input, t_env)) == 1)
	{
	  list.args = strto_wordtab(list.user_input, " ");
	  if ((ctrl = forkandrun(ptr, t_env)) == 1)
	    ctrl = ctrl + 1;
	}
      if ((isatty(0)))
	pprint(PROMPT, 1);
      free(list.user_input);
    }
  if ((isatty(0)))
    pprint("exit\n", 1);
  return (ctrl);
}

char		**init_shell(t_shell *list, char **environ)
{
  char 	**t_env;
  int		pos;

  list->pid = 0;
  list->wstatus = 0;
  pos = 0;
  if ((!(environ[0])) || (!environ[1]))
    {
      list->tmpenv = my_strdup(TENV);
      t_env = strto_wordtab(list->tmpenv, " ");
      list->paths = strto_wordtab(t_env[0] + len("PATH="), ":");
      return (t_env);
    }
  t_env = dup_env(environ);
  pos = find_inenv(t_env, "PATH=");
  list->paths = strto_wordtab(t_env[pos] + len("PATH="), ":");
  return (t_env);
}
