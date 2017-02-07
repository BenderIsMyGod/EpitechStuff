/*
** base2.c for V1.3_stable in /home/bender/snippets/v1.3_stable/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 30 11:47:36 2017 John Doe
** Last update Tue Feb  7 14:25:34 2017 John Doe
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
