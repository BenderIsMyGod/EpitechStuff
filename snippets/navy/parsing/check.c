/*
** check.c for PSU_2016_Navy in /home/bender/Repo/PSU_2016_navy/srcs/parsing/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Jan 31 13:08:09 2017 John Doe
** Last update Thu Feb  2 11:26:42 2017 John Doe
*/

#include "navy.h"

int			checkargs(char *buffer)
{
  if (len(buffer) > 2)
    {
      p_printf(1, "\nWrong position\n");
      return (1);
    }
  else if ((buffer[0] >= 'A' && buffer[0] <= 'H') && \
	   (buffer[1] >= '0' && buffer[1] <= '8'))
    return (0);
  else
    {
      p_printf(1, "\nWrong position\n");
      return (1);
    }
}
int			invalid_char(char *buffer)
{
  int		i;
  int		ctrl;

  i = 0;
  ctrl = 0;
  while (buffer[i])
    {
      if ((buffer[i] >= 'A' && buffer[i] <= 'H') || (buffer[i] >= '0' \
	   && buffer[i] <= '8') || (buffer[i] == ':') || (buffer[i] == '\n'))
	ctrl++;
      i++;
    }
  if ((ctrl != i))
    errors("Invalid map detected\n", 84);
  return (0);
}
int		invalid_pos(char **buffer)
{
  int	i;
  int	ctrl;

  i = 0;
  ctrl = 0;
  while (buffer[i])
    {
      if ((buffer[i][2] == buffer[i][5]) || (buffer[i][3] == buffer[i][6]))
	ctrl = ctrl + 1;
      i = i + 1;
    }
  if ((ctrl != i))
    errors("Invalid map detected\n", 84);
  return (0);
}
int					check_map(const char *path)
{
  int				fd;
  ssize_t 	rd;
  char			buffer[37];

  fd = open_map(path);
  if ((rd = read(fd, &buffer, 35)) == -1)
    errors("Failed to read \n", 84);
  if (rd > 32)
    errors("Invalid map detected\n", 84);
  close(fd);
  if (invalid_char(buffer))
    errors("Invalid map detected\n", 84);
  return (0);
}
