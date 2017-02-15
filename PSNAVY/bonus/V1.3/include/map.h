/*
** my.h for  in /home/CAZAUB_C/projet_de_lanée/PSU_2016_navy/include
**
** Made by clement cazaubon
** Login   <CAZAUB_C@epitech.net>
**
** Started on  Mon Jan 30 10:37:09 2017 clement cazaubon
** Last update Sat Feb 11 11:29:16 2017 John Doe
*/

#ifndef MAP_H_
# define MAP_H_

/* *********************************** */
/*
** Map opening, parsing and printing
**        functions.
*/
/* *********************************** */

#define FIRSTROWS		" |A B C D E F G H\n-+---------------\n"

typedef struct	s_map
{
  char	map[8][8];
  char	enemy_map[8][8];
  int		tab[4];
}							t_map;

void	init_map (t_map *map);
int	check_f(const char *filename, t_map *map);
void	update_map(const char *str, t_map *map, int player);
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
void	liner(char str[8][8]);
void    affich_map(t_map *map);
const char	*check_hit(t_map *map);

#endif
