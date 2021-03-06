/*
** pshellv2.c for Pshell in /home/bender/GrowUp/snippetsandmore/shellv1/V2/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Dec 27 23:09:16 2016 John Doe
** Last update	Tue Jan 03 15:25:12 2017 Full Name
*/

#include "pshell.h"
#include <errno.h>

int		parse_env(char **env, char *str)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (env[i++])
    {
      while (env[i][j])
	{
	  if (env[i][0] == str[0] && env[i][1] == str[1] && env[i][2] == str[2])
	    return (i);
	  j++;
	}
      j = 0;
    }
  return (0);
}
char				*stradd(char *src, char *next)
{
  ssize_t		len_src;
  ssize_t		i;

  i = 0;
  if ((next[0] == '/') || (next[0] == '.'))
    return (NULL);
  len_src = len(src);
  src[len_src] = '/';
  while (next[i])
    src[++len_src] = next[i++];
  src[len_src + 1] = '\0';
  return (src);
}
int		 			exec(char **args, char **environ, char *buff)
{
  char			**path;
  int				*wstatus;
  int				i, j, exe, cpid;

  path = NULL;
  wstatus = 0;
  i = j = exe = cpid = 0;
  if ((cpid = fork()) == -1)
    errors("Fork error");
  i = parse_env(environ, "PAT");
  path = strtowordtab(environ[i] + 5, ':');
  i = 0;
  while (path[i])
    i++;
  while ((cpid = waitpid(-1, wstatus, 0)) == -1)
    while (path[j])
	if (((exe = execve(stradd(path[j++], args[0]), args, \
			  environ)) && j == i) && (execve(args[0], args, environ)))
	    {
	      pprint(args[0], 2);
	      pprint(": Commande introuvable.\n", 2);
	      *buff = '\0';
	      exit (1);
	    }
  return (0);
}
int				loop(char **environ)
{
  char		*buff;
  char		**args;
  char		delim;

  args = NULL;
  delim = ' ';
  while ((buff = get_next_line(STDIN_FILENO)))
    {
      shortcuts(buff);
      if (buff[0] == 'c' && buff[1] == 'd')
	environ = change_path(environ, buff);
      args = strtowordtab(buff, delim);
      exec(args, environ, buff);
      if ((isatty(0)))
	pprint(PROMPT, 1);
    }
  if ((isatty(0)))
    pprint("exit\n", 1);
  return (0);
}
