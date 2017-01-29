/*
** base.c for Minishell1 in /home/bender/Repo/PSU_2016_minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 16 21:33:40 2017 John Doe
** Last update Tue Jan 17 19:00:07 2017 John Doe
*/

#include "pshell.h"

void		pprint(char *str, int fd)
{
  int		i;

  i = 0;
  while (str[i])
    write(fd, &str[i++], 1);
}
ssize_t			len(char *str)
{
  ssize_t		len;

  len = 0;
  while (str[len])
    len++;
  return (len);
}

int			argumentcount(char *str, char delim)
{
  int		i;
  int		j;
  static int k = 0;

  j = 0;
  i = 0;
  k = k + 1;
  while (str[i])
    {
      if (str[i] == delim && str[i + 1])
	j++;
      i++;
    }
  return (j + k);
}

char				*my_strcat(char *dest, char *src)
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

int			my_strncmp(char *s1, char *s2, int n)
{
  int		i;

  i = 0;
  while (i <= n && s1[i] == s2[i])
    i++;
  if (i == n)
    return (i);
  return (0);
}
