/*
** pcd.c for binforShell in /home/bender/GrowUp/snippetsandmore/binforSHell/pcd/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Dec 30 14:25:26 2016 John Doe
** Last update	Fri Dec 30 14:47:27 2016 John Doe
*/

#include "pcd.h"

int						main(int ac, char **av)
{
  const	char	*path;
  int					dir;
  int					s_env;

  dir = s_env = 0;
  if (av[1])
    {
      path = av[1];
      if ((dir = chdir(path)) == -1) {
	printerr(strerror(errno)); return (84); }
      if ((s_env = setenv("PATH", path, 1) == -1)) {
	printerr(strerror(errno)); return (84); }
      print(av[1]);
      return (0);
    }
  print("Usage : ./pcd \"pathname\"\n");
  return (0);
}
