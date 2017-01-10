/*
** core.c for BOOK in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 09:12:13 2016 John Doe
** Last update	Thu Dec 22 18:17:10 2016 John Doe
*/

#include "book.h"

void		fdprint(char *str, int fd)
{
  while (*str)
    write(fd, &*str++, 1);
}
void		fpprint(char *str, FILE *fp)
{
  while (*str)
    fwrite(&*str++, 1, 1, fp);
}
void		print(char *str)
{
  while (*str)
    write(1, &*str++, 1);
}

void		printerr(char *errmsg)
{
  while (*errmsg)
    write(2, &*errmsg++, 1);
}

int			len(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
