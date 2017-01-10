/*
** core2.c for BOOK in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 13:33:24 2016 John Doe
** Last update	Thu Dec 22 18:13:59 2016 John Doe
*/

#include "book.h"

void		put_nbr(long nb)
{
  if (nb >= LONG_MAX || nb <= LONG_MIN)
    put_nbr(-1);
  if (nb < 0)
    {
      nb *= -1;
      print("-");
    }
  if (nb > 9)
    {
      put_nbr(nb / 10);
      nb = (nb % 10) + 48;
      write(1, &nb, 1);
    }
  else
    {
      nb = (nb % 10) + 48;
      write(1, &nb, 1);
    }
}

int     isthesame(char *s1, char *s2, ssize_t len)
{
  int   i;

  i = 0;
  while (s1[i] != '\0' && i != len)
    {
      if (s1[i] != s2[i])
	return (1);
       i++;
    }
  return (0);
}
int				isnum(char *str)
{
  int			i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= '0' && str[i] <= '9')
	return (1);
      return (0);
      i++;
    }
  return (0);
}
