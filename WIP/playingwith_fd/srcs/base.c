/*
** base.c for strtowordtab in /home/bender/Blinux/bender/Snippets/strtowordtab/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Dec 27 21:32:38 2016 John Doe
** Last update	Thu Dec 29 10:02:27 2016 John Doe
*/

#include "playwith_fd.h"

void		print(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      write(1, &str[i], 1);
      i++;
    }
}
ssize_t			len(char *str)
{
  ssize_t		len;

  len = 0;
  while (str[len])
    len++;
  return (len);
}
void		printerr(char *errmsg)
{
  int		i;

  i = 0;
  while (errmsg[i])
    {
      write(2, &errmsg[i], 1);
      i++;
    }
}

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
