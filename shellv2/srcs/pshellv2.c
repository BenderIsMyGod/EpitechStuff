/*
** pshellv2.c for Pshell in /home/bender/GrowUp/snippetsandmore/shellv1/V2/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Dec 27 23:09:16 2016 John Doe
** Last update	Tue Jan 03 14:50:38 2017 Full Name
*/

#include "pshell.h"

int		findpath(char **env)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (env[i])
    {
      while (env[i][j])
	{
	  if (env[i][0] == 'P' && env[i][1] == 'A')
	    return (i);
	  j++;
	}
      j = 0;
      i++;
    }
  return (0);
}
char				*stradd(char *src, char *next)
{
  ssize_t		len_src;
  ssize_t		i;

  i = 0;
  len_src = len(src);
  src[len_src] = '/';
  while (next[i])
    src[++len_src] = next[i++];
  src[len_src + 1] = '\0';
  return (src);
}
void		 		exec(char *buff, char **args, char **environ)
{
  char			**path;
  int				cpid;
  int				*wstatus;
  int				i;
  int				j;
  int				exe;

  i = j = exe = 0;
  path = NULL;
  init_env(environ);
  if ((cpid = fork()) == -1)
    errors(errno);
  i = findpath(environ);
  path = strtowordtab(environ[i] + 5, ':');
  int t = 0;
  while (args[t])
    printf("%s\n", args[t++]);
  if ((cpid = waitpid(-1, wstatus, 0)) == -1)
    {
      while (path[j])
	{
	  while ((exe = execve(stradd(path[j], args[0]), args, environ)) == -1)
	    j++;
	}
    }
}
void		set_path(char *path)
{
  int		dir;

  dir = 0;
  if ((dir = chdir(path)) == -1)
    errors(errno);
  path = NULL;
}

void		loop(char **environ)
{
  char		buff[READSIZE + 1];
  ssize_t	rd;
  char		**args;

  rd = 0;
  args = NULL;
  while ((rd = read(STDIN_FILENO, buff, READSIZE)) != 0)
    {
      shortcuts(buff);
      args = strtowordtab(buff, ' ');
      exec(buff, args, environ);
      buff[rd] = '\0';
      print(PROMPT);
    }
}
