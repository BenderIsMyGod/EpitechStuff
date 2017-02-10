/*
** base2.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/core/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 09:20:18 2017 John Doe
** Last update Fri Feb 10 09:20:25 2017 John Doe
*/

#include "base.h"

int			my_stringisnum(const char *str)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (str[i])
    {
      if ((str[i] >= '0') && (str[i] <= '9'))
	j = j + 1;
      i++;
    }
  if (j == i)
    return (j);
  else
    return (0);
}

char			*my_strcatvs(char *dest, const char *src)
{
  int			i;
  int			j;

  i = 0;
  j = len(dest);
  while (src[i])
    {
      dest[j + i] = src[i];
      i++;
    }
  dest[j + i] = '\0';
  return (dest);
}
