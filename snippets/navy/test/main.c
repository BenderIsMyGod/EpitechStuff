/*
** main.c for test_navy in /home/bender/Repo/PSU_2016_navy/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Feb  6 11:31:50 2017 John Doe
** Last update Mon Feb  6 12:44:33 2017 John Doe
*/

#include "navy.h"

char			cvrt_pos(int pos)
{
  int			i;
  char		*coord;

  i = 0;
  coord = "  a b c d e f g h";
  while (coord[i])
    {
      if (i == pos)
	return (coord[i]);
      i = i + 2;
    }
  return (0);
}
char		**put_boats(char **map, char *coord)
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

int			main(int ac, char **av)
{
  int		i;
  char	**map;

  map = fill_emptymap();
  map = put_boats(map, av[1]);
  while (map[i])
    {
      p_printf(1, "%s\n", map[i]);
      i++;
    }
  return (0);
}
