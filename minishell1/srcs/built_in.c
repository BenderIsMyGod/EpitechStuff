/*
** built_in.c for minishell1 in /home/bender/Repo/PSU_2016_minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan  9 09:54:38 2017 John Doe
** Last update Thu Jan 12 02:35:47 2017 Junior Bender
*/

#include "pshell.h"

char		**change_path(char **environ, char *path)
{
  int		i;
  char	*buffer;

  i = 0;
  if ((buffer = malloc(sizeof(*buffer) * BUFFERSIZE)) == NULL)
    errors("malloc error\n");
  i = parse_env(environ, "OLDPWD");
  environ[i] = NULL;
  environ[i] = my_strcat("OLDPWD=", getcwd(buffer, BUFFERSIZE));
  i = 0;
  if ((len(path) <= 3))
    chdir("/home/");
  else if ((chdir(path + 3)) == - 1)
    pprint("No such file or directory\n", 2);
  i = parse_env(environ, "PWD=");
  environ[i] = NULL;
  environ[i] = my_strcat("PWD=", getcwd(buffer, BUFFERSIZE));
  path[0] = '\0';
  return (environ);
}

int	unsetenv(const char *name, char **environ)
{
  
  char	**ep;
  char  **sp;
  size_t len;
  
  if (name == NULL || name[0] == '\0' || strchr(name, '=') != NULL) {
        errno = EINVAL;
        return -1;
  }

  len = strlen(name);
  
  for (ep = environ; *ep != NULL; )
        if (strncmp(*ep, name, len) == 0 && (*ep)[len] == '=') {
	  for (sp = ep; *sp != NULL; sp++)
	    *sp = *(sp + 1);
        } else {
	  ep++;
        }
  return 0;
}
