/*
** char.c for  in /home/CAZAUB_C/projet_de_lanée/PSU_2016_navy
** 
** Made by clement cazaubon
** Login   <CAZAUB_C@epitech.net>
** 
** Started on  Mon Jan 30 14:04:38 2017 clement cazaubon
** Last update Fri Feb 10 13:55:26 2017 clement cazaubon
*/

#include "map.h"

int	is_number(char c)
{
  if (c >= '1' && c <= '8')
    return (0);
  else
    return (-1);
}

int	is_alpha(char c)
{
  if (c >= 'A' && c <= 'H')
    return (0);
  else
    return (-1);
}

int	is_boat(char c)
{
  if (c >= '2' && c <= '5')
    return (0);
  return (-1);
}

void	liner(char **str)
{
  int	i;
  int	j;

  j = 0;
  i = 0;
  while (i < 8)
    {
      p_printf(1, "%d|", i + 1);
      while (j < 8)
	{
	  p_printf(1, "%c", str[i][j]);
	}
      p_printf(1, "\n");
      j = 0;
      i++;
    }
}
