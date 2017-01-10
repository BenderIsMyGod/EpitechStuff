/*
** main.c for Book in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 09:07:21 2016 John Doe
** Last update	Thu Dec 29 08:12:07 2016 John Doe
*/

#include "book.h"

void			init_env(char **environ)
{
  if ((setenv("SHELL", NAME, 1)) == -1)
    errors(errno);
}
int							main(int ac, char *av[])
{
  sighandler_t	handler;
  extern char		**environ;

  handler = NULL;
  signal(SIGINT, handler);
  init_env(environ);
  print(INTRO);
  print(PROMPT);
  while (ac)
    {
      loop();
      return (0);
    }
  return (0);
}
