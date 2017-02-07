/*
** main.c for strcat in /home/bender/snippets/strcat/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan  9 12:25:57 2017 John Doe
** Last update Mon Jan  9 13:12:22 2017 Junior Bender
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int			len(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
char		*my_strncat(char *dest, char *src, int n)
{
  int		i;
  int		j;
  char	*buffer;

  i = 0;
  if ((buffer = malloc(sizeof(*buffer) * len(dest) + len(src) + 1)) == NULL)
    return (NULL);
  while (dest[i])
    {
      buffer[i] = dest[i++];
      //i++;
    }
  buffer[i] == '\0';
  i = 0;
  j = len(buffer);
  while (src[i])
    {
      buffer[j + i] = src[i++];
      //i++;
    }
  buffer[j + i] == '\0';
  return (buffer);
}

int		main(int ac, char **av)
{
  printf("%s\n", my_strncat("papa", " dans maman", 14));
  return (0);
}
