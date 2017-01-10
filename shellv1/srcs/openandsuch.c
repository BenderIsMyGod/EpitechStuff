/*
** openandsuch.c for BOOK in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 09:42:58 2016 John Doe
** Last update	Fri Dec 23 20:52:18 2016 John Doe
*/

#include "book.h"

int			open_that(char *filename, int flags)
{
  int		fd;
  char	buf[ERRSIZE];

  fd = 0;
  if ((fd = open(filename, flags)) == -1)
    printerr(strerror(errno));
  return (fd);
}
