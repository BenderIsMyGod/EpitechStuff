/*
** built_in.c for Minishell1 in /home/bender/Repo/PSU_2016_minishell1/v1.2/srcs/built_in/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Jan 17 23:15:40 2017 John Doe
** Last update Thu Jan 26 16:20:15 2017 John Doe
*/

#include "../include/shell1.h"
#include <stdlib.h>

#ifndef BUFFERSIZE
# define BUFFERSIZE (1201)
#endif

/*
** Penser a afficher l'env
** quand setenv tout seul
*/
char		**set_environ(char *buff, char **environ)
{
  static int		i = 0;
  char	*tmp;
  char	**buffer;

  buffer = strto_wordtab(buff, " ");
  if (!(buffer[2]))
    return (environ);
  tmp = my_strcat(buffer[1], "=");
  i = find_inenv(environ, buffer[1]);
  if (!(i))
    {
      while (environ[i])
	i++;
    }
  environ[i] = my_strcat(tmp, buffer[2]);
  environ[i + 1] = 0;
  return (environ);
}
char		**unset_environ(char *buff, char **environ)
{
  static int		i = 0;
  char	**buffer;

  buffer = strto_wordtab(buff, " ");
  if (!(buffer[1]))
    return (environ);
  i = find_inenv(environ, buffer[1]);
  if (!(i))
    {
      return (environ);
    }
  environ[i] = 0;
  return (environ);
}

int			change_path(char *user_input, char **environ)
{
  int		i;
  char	*buffer;
  char  *tmp;

  i = 0;
  if ((tmp = buffer = malloc(sizeof(*buffer) * BUFFERSIZE)) == NULL)
    errors(strerror(errno), 84);
  i = find_inenv(environ, "OLDPWD");
  if (user_input[3] == '-'  && user_input[4] == '-')
    user_input = user_input + 3;
  if (user_input[3] == '-' && !(user_input[4]))
    tmp = environ[i] + len("OLDPWD=");
  environ[i] = my_strcat(my_strdup("OLDPWD="), getcwd(buffer, BUFFERSIZE));
  if ((len(user_input) <= 2))
    chdir(environ[find_inenv(environ, "HOME")] + 5);
  else if (((chdir(user_input + 3)) == - 1) && \
	   user_input[3] != '-' && ((isatty(0))))
    pprint(my_strcat(user_input + 3, NOEXST), 2);
  else  if (user_input[3] == '-')
    chdir(tmp);
  i = find_inenv(environ, "PWD=");
  environ[i] = my_strcat(my_strdup("PWD="), getcwd(buffer, BUFFERSIZE));
  return (0);
}
