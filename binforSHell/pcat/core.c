/*
** core.c for BinForShell in /home/bender/GrowUp/snippetsandmore/binforSHell/pcat/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Dec 30 09:56:07 2016 John Doe
** Last update	Fri Dec 30 10:30:49 2016 John Doe
*/

#include "cat.h"

int			open_that(char *filename)
{
  int		fd;

  fd = 0;
  if ((fd = open(filename, O_RDONLY)) == -1) {
    printerr(strerror(errno)); printerr("\n"); }
  return (fd);
}

off_t	stat_size(char *filename)
{
  struct stat statinf;

  if ((stat(filename, &statinf)) == -1) {
    printerr(strerror(errno)); printerr("\n"); exit (84); }
  return (statinf.st_size);
}
ssize_t	len(char *str)
{
  ssize_t	len;

  len = 0;
  while (str[len])
    len++;
  return (len + 1);
}

void		print(char *str)
{
  write(1, str, len(str));
}

void		printerr(char *errmsg)
{
  write(2, errmsg, len(errmsg));
}
