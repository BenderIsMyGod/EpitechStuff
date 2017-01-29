/*
** built_in.c for minishell1 in /home/bender/Repo/PSU_2016_minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan  9 09:54:38 2017 John Doe
** Last update Sat Jan 14 17:57:58 2017 John Doe
*/

#include "pshell.h"
#include <errno.h>

char		**change_path(char **environ, char *path)
{
  int		i;
  char	*buffer;
  char  *tmp;

  i = 0;
  if ((buffer = tmp = malloc(sizeof(*buffer) * BUFFERSIZE)) == NULL)
    errors("malloc error\n");
  i = parse_env(environ, "OLDPWD");
  if (path[3] == '-')
    tmp = environ[i] + 7;
  environ[i] = my_strcat("OLDPWD=", getcwd(buffer, BUFFERSIZE));
  if ((len(path) <= 2))
    {
      path[0] = '\0';
      return (environ);
    }
  else if (((chdir(path + 3)) == - 1) && path[3] != '-' && ((isatty(0))))
    pprint(my_strcat(path + 3, ": Aucun fichier ou dossier de ce type.\n"), 2);
  else  if (path[3] == '-')
    chdir(tmp);
  i = parse_env(environ, "PWD=");
  environ[i] = my_strcat("PWD=", getcwd(buffer, BUFFERSIZE));
  path[0] = '\0';
  return (environ);
}
