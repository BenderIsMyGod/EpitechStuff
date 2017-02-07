/*
** navy.c for PSU_2016_Navy in /home/bender/Repo/PSU_2016_navy/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Jan 31 11:51:02 2017 John Doe
** Last update Mon Feb  6 12:54:43 2017 John Doe
*/

#include "navy.h"

int		open_map(const char *name)
{
  int	fd;

  if ((fd = open(name, O_RDONLY)) == -1)
    errors(my_strcat(my_strdup(name), ": no such file or directory\n"), 84);
  return (fd);
}
char			**map_tobuffer(const char *name)
{
  int 		fd;
  char		**map = NULL;
  int			i;

  i = 0;
  fd = open_map(name);
  if ((map = malloc(sizeof(*map) * 5 + 1)) == NULL)
    errors("Memory allocation error\n", 84);
  while ((map[i] = get_next_line(fd)))
    i++;
  map[i] = 0;
  close(fd);
  return (map);
}

char			**get_map(const char *pathname)
{
  char	**map;

  map = NULL;
  check_map(pathname);
  map = map_tobuffer(pathname);
  return (map);
}
