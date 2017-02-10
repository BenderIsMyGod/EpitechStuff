/*
** check_fight.c for  in /home/CAZAUB_C/projet_de_lanée/PSU_2016_navy/paul/PSU_2016_navy/srcs/check_map
**
** Made by clement cazaubon
** Login   <CAZAUB_C@epitech.net>
**
** Started on  Thu Feb  9 21:10:32 2017 clement cazaubon
** Last update Fri Feb 10 09:14:14 2017 John Doe
*/

#include "navy.h"

/* format_pos(str); <== pas encore ecrite x) */
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
	  if (str[i][j] == 0)
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

void	refresh_map();
