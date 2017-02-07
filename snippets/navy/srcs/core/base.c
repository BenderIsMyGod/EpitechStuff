/*
** base.c for Minishell1 in /home/bender/GrowUp/snippetsandmore/minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 16 22:10:35 2017 John Doe
** Last update	Sat Jan 21 22:08:23 2017 Full Name
*/

#include <unistd.h>
#include <stdlib.h>

#include "errors.h"
#include "base.h"

int					pprint(const char *str, int fd)
{
  ssize_t		wr;

  wr = 0;
  if ((wr = write(fd, str, len(str))) == -1)
    errors(FDERR, 84);
  return (0);
}

char			*my_malloc(char *str, size_t len)
{
  if ((str = malloc(sizeof(*str) * len)) == NULL)
    errors(strerror(errno), 84);
  return (str);
}
char			**freetab(char **ptr)
{
  int			i;
  int			j;

  i = 0;
  j = 0;
  while (ptr[i])
    i++;
  while (j < i)
    {
      free(ptr[j]);
      ptr[j] = NULL;
      j++;
    }
  free(ptr);
  return (NULL);
}
char			*clean_free(char *ptr)
{
  if (ptr)
    {
      free(ptr);
      ptr = NULL;
    }
  return (NULL);
}
int			my_atoi(const char *str)
{
  int		nb;

  nb = 0;
    if ((str))
  {
      while (*str)
    {
        if (*str >= '0' && *str <= '9')
      {
          nb *= 10;
          nb += *str - 48;
      }
      else
        return (nb);
      str++;
    }
  }
  return (nb);
}
