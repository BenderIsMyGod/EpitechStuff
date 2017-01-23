/*
** check_dir.c for Minishell1 in /home/bender/GrowUp/snippetsandmore/minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 16 23:30:21 2017 John Doe
** Last update Tue Jan 17 21:27:35 2017 John Doe
*/

#include "base.h"
#include "errors.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int		open_that(const char *pathname)
{
  int	fd;

  if ((fd = open(pathname, O_RDONLY)) == -1)
    return (errors(NOEXST, 84));
  return (fd);
}

int		check_thatbinary(const char *name)
{
  if (access(name, F_OK) == -1 || access(name, X_OK) == -1)
    return (1);
  return (0);
}
