/*
** error.c for Minishell1 in /home/bender/GrowUp/snippetsandmore/minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 16 22:40:27 2017 John Doe
** Last update Tue Jan 17 11:47:05 2017 John Doe
*/

#include "errors.h"
#include "base.h"
#include <stdlib.h>
#include <unistd.h>

int		errors(const char *errmsg, int exitval)
{
  write(2, errmsg, len(errmsg));
  write(2, "\n", 1);
  exit (exitval);
}
