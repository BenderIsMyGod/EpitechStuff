/*
** char.c for  in /home/CAZAUB_C/projet_de_lanée/PSU_2016_navy
** 
** Made by clement cazaubon
** Login   <CAZAUB_C@epitech.net>
** 
** Started on  Mon Jan 30 14:04:38 2017 clement cazaubon
** Last update Thu Feb  9 21:48:47 2017 clement cazaubon
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
// a ajouter au .h

int	is_boat(char c)
{
  if (c >= '2' && c <= '5')
    return (0);
  return (-1);
}

void	format_pos(char *str)
{
  int	i;
  char	c;
  
  i = 0;
  while (i != '\0' && i < 2)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
      i++;
    }
  if (is_number(str[0]) == 0 && is_alpha(str[0]) == 0)
    {
      c = str[0];
      str[0] = str[1];
      str[1] = c;
    }
}
