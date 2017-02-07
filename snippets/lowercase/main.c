/*
** main.c for Convert_base in /home/bender/snippets/convertbase/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Feb  6 08:13:05 2017 John Doe
** Last update Mon Feb  6 11:21:14 2017 John Doe
*/

#include "my.h"

inline char *lowercase_ize(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(ISCAP(str[i])) && !(ISCHAR(str[i])))
	str[i] = LOW(str[i]);
      i++;
    }
  return (str);
}
ssize_t		len(const char *a)
{
  ssize_t i;

  i = 0;
  while (a[i])
    i++;
  return (i);
}
int		main(int ac, char **av)
{
  char  *a;
  int		fd;

  fd = open(av[1], O_RDONLY);
  a = malloc(1000);
  read(fd, a, 999);
  a = lowercase_ize(a);
  write(1, a, len(a));
  write(1, "\n", 1);
  return (0);
}
