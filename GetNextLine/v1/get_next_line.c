/*
** get_next_line.c for GNL in /home/bender/Repo/CPE_2016_getnextline
** 
** Made by Junior Bender
** Login   <bender@epitech.net>
** 
** Started on  Sat Jan  7 21:52:10 2017 Junior Bender
** Last update Sat Jan  7 21:56:14 2017 Junior Bender
*/

#include "get_next_line.h"

int	main(void)
{
  char	*str;

  while ((str = get_next_line(0)) != NULL)
    {
      print(str);
      print("\n");
    }
  return (0);
}
