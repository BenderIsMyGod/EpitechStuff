/*
** graph.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/visuals/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Wed Feb  1 12:24:25 2017 John Doe
** Last update	Sun Feb 05 22:38:17 2017 Full Name
*/

#include "navy.h"

void		print_awesome_emptymap(void)
{
  int 	i;
  int		j;

  i = 1;
  j = 0;
  p_printf(1, "\n%s\n", FIRSTROWS);
  while (i != 9)
    {
      p_printf(1, "%d|", i);
      while (j != 8)
	{
	  p_printf(1, "%c%c", '.', ' ');
	  j = j + 1;
	}
      p_printf(1, "\n");
      j = 0;
      i = i + 1;
    }
  p_printf(1, "\n");
}

void	print_map(char **map)
{
  int	i;

  i = 0;
  while ((map[i]))
    {
      p_printf(1, "%s\n", map[i]);
      i++;
    }
}
