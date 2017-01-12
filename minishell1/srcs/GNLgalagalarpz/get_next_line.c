/*
** get_next_line.c for get_next_line in /home/bender/Repo/CPE_2016_getnextline/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sun Jan  8 21:12:35 2017 John Doe
** Last update Wed Jan 11 15:12:31 2017 John Doe
*/

#include "pshell.h"

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
char		*strcat_imalloc(char *dest, char *src, int k)
{
  int		i;
  int		j;
  char	*buffer;

  i = 0;
  if ((buffer = malloc(sizeof(*buffer) * len(dest) + len(src) * k + 1)) == NULL)
    return (NULL);
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
void					remove_fckingbackslh(char *buffer)
{
  int					i;

  i = 0;
  while ((buffer[i] != '\n'))
    i++;
  buffer[i] = '\0';
}
char					*get_next_line(const int fd)
{
  static char *buffer = NULL;
  char				*line;
  int					j, rd;
  static int 	i = 0;

  j = 0;
  if ((buffer = malloc(sizeof(*buffer) * READ_SIZE + 1)) == NULL)
    return (NULL);
  if ((line = malloc(sizeof(*buffer) * READ_SIZE * (i + 1))) == NULL)
    return (NULL);
  while ((rd = read(fd, buffer, READ_SIZE)))
    {
      buffer[rd] = '\0';
      line = strcat_imalloc(line, buffer, i = i + 1);
      while ((line[j]))
	if (line[j++] == '\n')
	    {
	      i = j = 0;
	      remove_fckingbackslh(line);
	      return (line);
	    }
    }
  if ((isatty(0)))
    pprint("exit\n", 1);
  return (NULL);
}
