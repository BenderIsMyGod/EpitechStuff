/*
** main.c for minishell1 in /home/bender/GrowUp/snippetsandmore/minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 16 22:55:53 2017 John Doe
** Last update Tue Jan 17 20:03:21 2017 John Doe
*/

#include "shell1.h"

int				main(int ac, char **av, char **environ)
{
  ac = ac;
  av = av;
  pprint("> ", 1);
  exec_that(environ);
  return (0);
}
