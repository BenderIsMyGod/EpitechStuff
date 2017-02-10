/*
** file_check.c for  in /home/CAZAUB_C/projet_de_lanée/PSU_2016_navy
**
** Made by clement cazaubon
** Login   <CAZAUB_C@epitech.net>
**
** Started on  Mon Jan 30 10:33:59 2017 clement cazaubon
** Last update Thu Feb  9 20:11:53 2017 clement cazaubon
*/

#include "navy.h"

int	basic_analitics(char *str)
{
  str_cap(str);
  good_direction(str);
  if (len(str) != 7 || check_2_point(str) == -1)
    return (1);
  if (size_boat(str) == -1 || f_location(str) == -1 || l_location(str) == -1)
    return (1);
  if (check_both(str) == -1)
    return (1);
  return (0);
}

int	rf(int fd, t_map *map)
{
  char *chain;

  init_map(map);
  while ((chain = get_next_line(fd)) != NULL)
    {
      if (basic_analitics(chain) == 1)
	return (-1);
      else
	{
	  if (add_tomap(map, chain) == -1)
	    return (-1);
	}
      free(chain);
    }
  return (0);
}

int	check_f(char *name, t_map *map)
{
  int	fd;

  if ((fd = open(name, O_RDONLY)) == -1)
    return (84);
  if (rf(fd, map) == -1)
    return (errors("bad file formating", 84));
  close(fd);
  return (0);
}
