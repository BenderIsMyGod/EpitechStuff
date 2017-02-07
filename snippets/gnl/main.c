/*
** main.c for GNL in /home/bender/snippets/gnl/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Jan 14 11:15:59 2017 John Doe
** Last update Sat Jan 14 11:16:13 2017 John Doe
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>

static char	buff[SIZE_BUFF];
static int	buff_mem = 0;
static int	init = 0;

int	rd_buff(const int fd, int *var)
{
  buff_mem = read(fd, buff, SIZE_BUFF);
  init = 0;
  *var = 0;
  return (buff_mem);
}

char	*new_line(char *line, int var)
{
  char	*str;
  int	len;
  int	i;

  i = -1;
  len = 0;
  if (line)
    len = strlen(line);
  str = malloc(var + len + 1);
  memset(str, '\0', var + len + 1);
  while (++i < len)
    str[i] = line[i];
  i = 0;
  while (i < var)
    {
      str[len + i] = buff[init + i];
      i++;
    }
  str[len + i] = '\0';
  if (line)
    free(line);
  init += var + 1;
  return (str);
}

char	*get_next_line(const int fd)
{
  char	*line;
  int	var;
  int	i;

  i = 0;
  var = 0;
  line = 0;
  while (i != SIZE_READ)
    {
      if (init >= buff_mem && rd_buff(fd, &var) <= 0)
	  return (line);
      if (buff[init + var] == '\n')
	{
	  line = new_line(line, var);
	  return (line);
	}
      if (init + var == buff_mem - 1)
	line = new_line(line, var + 1);
      var++;
      i++;
    }
  line = new_line(line, var);
  init -= 1;
  return (line);
}
