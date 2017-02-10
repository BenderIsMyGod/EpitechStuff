/*
** maintest.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 11:35:49 2017 John Doe
** Last update Fri Feb 10 11:37:27 2017 John Doe
*/

#include "navy.h"

struct count proto = {{0, 0, {0}}, 0, 0};

int			main(int ac, char **av)
{
  if (ac == 2)
    sender(av[1]);
  else if (ac == 1)
    receiver();
  return (0);
}
