/*
** built_in.c for minishell1 in /home/bender/Repo/PSU_2016_minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan  9 09:54:38 2017 John Doe
** Last update Tue Jan 17 07:53:24 2017 John Doe
*/

#include "pshell.h"
#include <errno.h>

char		**set_environ(char *buff, char **environ)
{
  static int		i = 0;
  char	*tmp;
  char	**buffer;

  buffer = strtowordtab(buff, ' ');
  if (!(buffer))
    return (environ);
  tmp = my_strcat(buffer[1], "=");
  i = parse_env(environ, buffer[1]);
  if (!(i))
    while (environ[i])
	i++;
  environ[i] = my_strcat(tmp, buffer[2]);
  *buff = '\0';
  return (environ);
}

char		**unset_environ(char *buff, char **environ)
{
  static int		i = 0;
  char	**buffer;

  buffer = strtowordtab(buff, ' ');
  if (!(buffer[1]))
    return (environ);
  i = parse_env(environ, buffer[1]);
  if (!(i))
    return (environ);
  environ[i] = "";
  *buff = '\0';
  return (environ);
}

char		**change_path(char **environ, char *path)
{
  int		i;
  char	*buffer;
  char  *tmp;

  i = 0;
  if ((buffer = tmp = malloc(sizeof(*buffer) * BUFFERSIZE)) == NULL)
    errors("malloc error\n");
  i = parse_env(environ, "OLDPWD");
  if (path[3] == '-' && !path[4])
    tmp = environ[i] + 7;
  environ[i] = my_strcat("OLDPWD=", getcwd(buffer, BUFFERSIZE));
  if ((len(path) <= 2))
    chdir(environ[parse_env(environ, "HOME")] + 5);
  else if (((chdir(path + 3)) == - 1) && path[3] != '-' && ((isatty(0))))
    pprint(my_strcat(path + 3, ": Aucun fichier ou dossier de ce type.\n"), 2);
  else  if (path[3] == '-')
    chdir(tmp);
  i = parse_env(environ, "PWD=");
  environ[i] = my_strcat("PWD=", getcwd(buffer, BUFFERSIZE));
  path[0] = '\0';
  return (environ);
}
