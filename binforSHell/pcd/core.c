/*
** core.c for BinForShell in /home/bender/GrowUp/snippetsandmore/binforSHell/pcat/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Dec 30 09:56:07 2016 John Doe
** Last update	Fri Dec 30 14:32:48 2016 John Doe
*/

#include "pcd.h"

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
