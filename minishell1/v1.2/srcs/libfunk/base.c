/*
** base.c for Minishell1 in /home/bender/GrowUp/snippetsandmore/minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 16 22:10:35 2017 John Doe
** Last update Tue Jan 17 22:13:20 2017 John Doe
*/

#include "base.h"
#include "errors.h"
#include <unistd.h>

int					pprint(const char *str, int fd)
{
  ssize_t		wr;

  wr = 0;
  if ((wr = write(fd, str, len(str))) == -1)
    errors(FDERR, 84);
  return (0);
}
