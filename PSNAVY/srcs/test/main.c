/*
** main.c for TEST in /home/bender/Repo/PSU_2016_navy/srcs/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Feb  7 14:07:32 2017 John Doe
** Last update Tue Feb  7 14:08:00 2017 John Doe
*/

#include "navy.h"

int			main(int ac, char **av)
{
  if (ac >= 2)
    serv(av[1]);
  cli();
  return (0);
}
