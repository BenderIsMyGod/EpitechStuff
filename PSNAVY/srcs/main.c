/*
** main.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Wed Feb  1 09:47:09 2017 John Doe
** Last update Fri Feb 10 09:18:10 2017 John Doe
*/

#include "navy.h"

int			main(int ac, char **av)
{
  if (strn_cmp(av[1], "-h", 2))
    p_exit(USAGE, 0);
  if (ac == 2)
    {
      server_game(av[1]);
      return (0);
    }
  if ((ac == 3) && (my_stringisnum(av[1])))
    {
      client_game(av[2], my_atoi(av[1]));
      return (0);
    }
  p_printf(1, "%s", USAGE);
  return (0);
}
