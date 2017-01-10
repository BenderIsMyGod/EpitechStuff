/*
** base.c for strtowordtab in /home/bender/Blinux/bender/Snippets/strtowordtab/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Dec 27 21:32:38 2016 John Doe
** Last update	Tue Dec 27 21:34:27 2016 John Doe
*/

#include "strtowordtab.h"

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

int			argumentcount(char *str, char delim)
{
  int		i;
  int		j;

  j = 0;
  i = 0;
  while (str[i])
    {
      if (str[i] == delim && str[i + 1])
	j++;
      i++;
    }
  return (j);
}
