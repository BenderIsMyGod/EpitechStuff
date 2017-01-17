/*
** string.c for minishell1 in /home/bender/GrowUp/snippetsandmore/minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 16 22:29:23 2017 John Doe
** Last update Tue Jan 17 19:57:55 2017 John Doe
*/

#include "base.h"
#include <stdlib.h>

char				*my_strdup(const char *src)
{
  char			*buffer;
  ssize_t		size;
  ssize_t		i;

  i = 0;
  size = len(src);
  if ((buffer = malloc(size + 1)) == NULL)
    errors("malloc error", 84);
  while (src[i] != '\0')
    {
      buffer[i] = src[i];
      i++;
    }
  buffer[i] = '\0';
  return (buffer);
}
char				*my_strcat(char *dest, const char *src)
{
  int				i;
  ssize_t		j;
  char			*buffer;

  i = 0;
  if ((buffer = malloc(sizeof(*buffer) * ((len(dest) + len(src)) + 1))) == NULL)
    return (NULL);
  while (dest[i])
    {
      buffer[i] = dest[i];
      i++;
    }
  buffer[i] = '\0';
  i = 0;
  j = len(buffer);
  while (src[i])
    {
      buffer[j + i] = src[i];
      i++;
    }
  buffer[j + i] = '\0';
  return (buffer);
}

int				strn_cmp(const char *s1, const char *s2, size_t n)
{
  size_t	i;

  i = 0;
  while (i != n && s1[i] == s2[i])
    i++;
  if (i == n)
    return (i);
  return (0);
}

ssize_t			len(const char *str)
{
  ssize_t		i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
