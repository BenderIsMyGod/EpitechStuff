/*
** check_fight.c for  in /home/CAZAUB_C/projet_de_lanée/PSU_2016_navy/paul/PSU_2016_navy/srcs/check_map
**
** Made by clement cazaubon
** Login   <CAZAUB_C@epitech.net>
**
** Started on  Thu Feb  9 21:10:32 2017 clement cazaubon
** Last update Sat Feb 11 11:30:18 2017 John Doe
*/

#include "navy.h"

int	check_valid_pos(char *str)
{
  if (len(str) != 2 || is_alpha(str[0]) == -1 || is_number(str[1]) == -1)
    return (-1);
  return (0);
}

int	check_win_loose(char **str)
{
  int	i;
  int	j;
  int	compt;

  i = 0;
  j = 0;
  compt = 0;
  while (i < 8)
    {
      while (j < 8)
	{
	  if (str[i][j] >= '2' && str[i][j] <= '5')
	    compt++;
	  j++;
	}
      j = 0;
      i++;
    }
  if (compt == 0)
    return (1);
  return (0);
}

void	affich_map(t_map *map)
{
  p_printf(1, "my_positions:\n");
  p_printf(1, "%s", FIRSTROWS);
  liner(map->map);
  p_printf(1, "\nenemy's positions:\n%s",FIRSTROWS);
  liner(map->enemy_map);
  p_printf(1, "\n");
}

const char	*check_hit(t_map *map)
{
  if (map->map[proto.ptr.bfr[1] - '1'][proto.ptr.bfr[0] - 'A'] == '.' ||
      map->map[proto.ptr.bfr[1] - '1'][proto.ptr.bfr[0] - 'A'] == 'o')
    return ("MISS");
  return ("HIT");
}

void	update_map(const char *str, t_map *map, int player)
{
  if (player == 1)
    {
      if (str[0] == 'M')
	map->map[proto.ptr.bfr[1] - '1'][proto.ptr.bfr[0] - 'A'] = 'o';
      else if (str[0] == 'H')
	map->map[proto.ptr.bfr[1] - '1'][proto.ptr.bfr[0] - 'A'] = 'x';
    }
  if (player == 2)
    {
      if (str[0] == 'M')
	map->enemy_map[proto.ptr.bfr[1] - '1'][proto.ptr.bfr[0] - 'A'] = 'o';
      else if (str[0] == 'H')
	map->enemy_map[proto.ptr.bfr[1] - '1'][proto.ptr.bfr[0] - 'A'] = 'x';
    }
}
