/*
** get_next_line.c for get_next_line in /home/bender/Repo/CPE_2016_getnextline/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sun Jan  8 21:12:35 2017 John Doe
** Last update Thu Jan 12 06:50:29 2017 John Doe
*/

#include "get_next_line.h"

size_t		len(char *str)
{
  size_t	i = 0;

  i = 0;
  while ((str[i]))
    i++;
  return (i);
}

void					*malloc_this(char *line, size_t len)
{
  void				*bfr;

  if ((bfr = malloc(sizeof(*line) * len + 1)) == NULL)
    return (NULL);
  return (bfr);
}

void    	my_strcpy(char *dest, char *src, int k)
{
  int			i;

  i = 0;
  *dest = '\0';
  if (k < 2)
    *src = '\0';
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
}

char		*my_strcat(char *dest, char *src, int k, ssize_t rd)
{
  int		i;
  int		j;
  static char	*buffer = NULL;

  i = 0;
  src[rd] = '\0';
  buffer = malloc_this(buffer, k * READ_SIZE);
  my_strcpy(buffer, dest, k);
  j = len(dest);
  while ((src[i]))
    {
      buffer[j + i] = src[i];
      i++;
    }
  buffer[j + i] = '\0';
  free(dest);
  return (buffer);
}
char					*get_next_line(const int fd)
{
  char 				*buffer = NULL;
  static char	*line = NULL;
  static int	i, j = 0;
  static ssize_t rd = 0;

  line = malloc_this(line, READ_SIZE);
  buffer = malloc_this(buffer, READ_SIZE);
  while ((rd = read(fd, buffer, READ_SIZE)))
    {
      line = my_strcat(line, buffer, i = i + 1, rd);
      while ((line[j]) != '\0')
	if ((line[j++] == 10) && (line[j] != ' '))
	    {
	      line[j - 1] = '\0';
	      i = j = 0;
	      free(buffer);
	      return (line);
	    }
    }
  free(buffer);
  return (NULL);
}
