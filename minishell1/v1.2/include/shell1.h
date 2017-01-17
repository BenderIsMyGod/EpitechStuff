/*
** shell1.h for minishell1 in /home/bender/GrowUp/snippetsandmore/minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 16 22:49:04 2017 John Doe
** Last update Tue Jan 17 22:31:26 2017 John Doe
*/

#ifndef SHELL1_H_
# define SHELL1_H_
#include <unistd.h>
#include <sys/types.h>

#include "base.h"
#include "errors.h"
#include "get_next_line.h"

#define TENV	"PATH=/bin:/sbin:/usr/bin:/usr/sbin\
  PWD=x OLDPWD=x TERM=xterm SHELL=mysh"

typedef struct  s_shell {
  char	**paths;
  char	**t_env;
  char	**args;
  char	*tmpenv;
  char	*user_input;
  int		*wstatus;
  pid_t	pid;
}								t_shell;

void		init_shell(t_shell *list, char **environ);
int			find_inenv(char **env, const char *str);
int			exec_that(char **environ);
int			forkandrun(int pid, int *wstatus, \
				   char **paths, char **args, char **env);

#endif
