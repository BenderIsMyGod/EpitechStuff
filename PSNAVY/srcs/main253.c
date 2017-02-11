/*
** main.c for  in /home/CAZAUB_C/projet_de_lanée/PSU_2016_navy
** 
** Made by clement cazaubon
** Login   <CAZAUB_C@epitech.net>
** 
** Started on  Mon Jan 30 10:31:53 2017 clement cazaubon
** Last update Fri Feb 10 14:16:40 2017 clement cazaubon
*/

#include "navy.h"

int	main(int ac, char **av)
{
  t_map *map;
  map = malloc(sizeof *map);
  
  check_f(av[1], map);

  free(map);
}
