/*
** get_next_line.c for get_next_line in /home/bender/Repo/CPE_2016_getnextline/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sun Jan  8 21:12:35 2017 John Doe
** Last update Tue Jan 10 09:14:50 2017 John Doe
*/

#include "get_next_line.h"

int		len(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
char		*my_strcat(char *dest, char *src)
{
  int		i;
  int		j;
  char	*buffer;

  i = 0;
  if ((buffer = malloc(sizeof(*buffer) * len(dest) + len(src) + 1)) == NULL)
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
char					*get_next_line(const int fd)
{
  char 				*buffer;
  static char	*line;
  int					j, rd;
  static int i = 0;

  j = 0;
  if ((buffer = malloc(sizeof(*buffer) * READ_SIZE + 1)) == NULL)
    return (NULL);
  if ((line = malloc(sizeof(*buffer) * READ_SIZE * i + 1)) == NULL)
    return (NULL);
  while ((rd = read(fd, buffer, READ_SIZE)))
    {
      buffer[rd] = '\0';
      if (i == 0)
	line = buffer;
      else
	line = my_strcat(line, buffer);
      while ((line[j]) && j++)
	if (line[j] == '\n')
	    return (line);
	  i++;
	}
  free(buffer);
  return (NULL);
}
