/*
** graph2.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/visuals/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Feb  6 11:30:38 2017 John Doe
** Last update Mon Feb  6 12:46:25 2017 John Doe
*/

#include "navy.h"

char		**put_hits(char **map, char *coord)
{
  int		cols;
  int		i;
  int		j;

  cols = 1;
  i = 0;
  j = 0;
  while (map[cols])
    {
      while (map[cols][i])
	{
	  if ((coord[j + 2] == cvrt_pos(i)) && my_atoi(&coord[j + 3]) == cols)
	    {
	      map[cols][i] = coord[j];
	      map[cols][i + 1] = ' ';
	    }
	  i++;
	}
      i = 0;
      cols++;
    }
  return (map);
}
char		**fill_emptymap(void)
{
  int		i;
  int		j;
  char	**map;

  i = 1;
  j = 0;
  if ((map = malloc(sizeof(*map) * 10 + 1)) == NULL)
    _exit (84);
  map[0] = FIRSTROWS;
  while (i != 9)
    {
      if ((map[i] = malloc(sizeof(*map[i]) * 17 + 1)) == NULL)
	_exit (84);
      map[i][0] = (char)i + 48;
      map[i][1] = '|';
      while (j != 8)
	{
    map[i] = my_strcat(map[i], ". ");
	  j++;
	}
      j = 0;
      i++;
    }
  return (map);
}
void		generate_map(char *pos)
{
  int		size;
  int		i;
  int		k;
  char	j;

  size = 8;
  i = 1;
  k = 0;
  j = 'a';
  p_printf(1, "%s", FIRSTROWS);
  while (i != size + 1)
    {
      p_printf(1, "\n%d|", i);
      while (j != 'i')
	{
	  if (pos[2] == j && my_atoi(&pos[3]) == i)
	    p_printf(1, "%s ", pos[0]);
	  else
	    write(1, ". ", 2);
	  j = j + 1;
	}
      j = 'a';
      i++;
    }
}
