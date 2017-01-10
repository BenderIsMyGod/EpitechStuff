/*
** main.c for Edit in /home/bender/parrot/home/bender/GrowUp/snippetsandmore/binforSHell/edit/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Dec 31 10:50:47 2016 John Doe
** Last update	Sat Dec 31 11:48:35 2016 Full Name
*/

#include "edit.h"

int			main(int ac, char **av)
{
  char	buff[1000];
  FILE 	*fp;

  if (av[1] && av[2])
    {
      fp = open_that(av[1]);
      fwrite(av[2], len(av[2]), 1, fp);
      fclose(fp);
      if (av[3] && av[3][0] == 'r') {
	fp = open_that(av[1]); fread(buff, 999, 1, fp); print(buff);}
      return (0);
    }
  print(ERRARGS);
  return (0);
}
