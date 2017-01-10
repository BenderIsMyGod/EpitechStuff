/*
** cat.c for BinforShell in /home/bender/GrowUp/snippetsandmore/binforSHell/pcat/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Dec 30 09:44:04 2016 John Doe
** Last update	Fri Dec 30 14:24:40 2016 John Doe
*/

#include "cat.h"
#include <stdio.h>

int				main(int ac, char **av)
{
  int			fd;
  char		buffer[BUFFERSIZE];
  off_t		size;

  fd = 0;
  if (ac <= 1)
    {
      while ((read(STDIN_FILENO, &buffer, 4095)) != 0)
	{
	  if (buffer[0] == 'q')
	    exit (EXIT_SUCCESS);
	  print(buffer);
	}
    }
  if (av[1])
    {
      fd = open_that(av[1]);
      if ((size = stat_size(av[1])) >= SSIZE_MAX) {
	printerr(strerror(errno)); exit (EXIT_FAILURE); }
      if ((read(fd, &buffer, size) == -1)) {
	printerr(strerror(errno)); exit (EXIT_FAILURE); }
      print(buffer);
      close(fd);
    }
  return (0);
}
