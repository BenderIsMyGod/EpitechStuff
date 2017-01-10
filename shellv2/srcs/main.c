/*
** main.c for PShellV2 in /home/bender/Desktop/Snippets/bookv2/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Dec 23 21:02:14 2016 John Doe
** Last update	Mon Jan 02 17:08:07 2017 Full Name
*/

#include "pshell.h"

void			init_env(char **environ)
{
  if ((setenv("SHELL", NAME, 1)) == -1)
    errors(errno);
}

int							main(int ac, char **argv, char **environ)
{
  sighandler_t	handler, handler2;
  char					buffer[BUFFERSIZE];
  int 					i_am_root;

  signal(SIGINT, handler);
  signal(SIGTRAP, handler2);
  i_am_root = (getuid() == 0);
  print(INTRO);
  print(PROMPT);
  if (i_am_root)
    printerr("\nIt's really a bad bad idea to run this shit as root ! u'll be warned\n");
  while (ac)
	{
	  loop(environ);
	  return (0);
	}
      return (0);
}
