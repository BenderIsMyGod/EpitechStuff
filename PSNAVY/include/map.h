/*
** my.h for  in /home/CAZAUB_C/projet_de_lanée/PSU_2016_navy/include
** 
** Made by clement cazaubon
** Login   <CAZAUB_C@epitech.net>
** 
** Started on  Mon Jan 30 10:37:09 2017 clement cazaubon
** Last update Thu Feb  9 21:55:04 2017 clement cazaubon
*/

#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

typedef struct	s_map
{
  char	map[8][8];
  char	enemy_map[8][8];
  int	tab[4];
}		t_map;

void	init_map (t_map *map);
int	check_f(char *name, t_map *map);
int	is_number(char c);
int	is_alpha(char c);
int	size_boat(char *str);
int	f_location(char *str);
int	l_location(char *str);
int	add_tomap(t_map *map, char *str);
int	check_both(char *str);
int	nb_check(t_map *map);
int	x_place(t_map *map, char *str);
int	y_place(t_map *map, char *str);
int	check_2_point(char *str);
int	good_direction(char *str);
int	str_cap(char *str);
