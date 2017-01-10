/*
** msg.c for BOOK in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 14:20:53 2016 John Doe
** Last update	Mon Jan 02 17:07:25 2017 Full Name
*/

#include "pshell.h"

void		errors(int errnum)
{
  char	buf[ERRSIZE];

  *buf = '\0';
  strerror_r(errno, buf, ERRSIZE);
  printerr(buf);
  printerr("\n");
  _exit(84);
}

void				help(char *helpmsg, char *buff)
{
  print(helpmsg);
  *buff = '\0';
}

void				license(char *licencemsg, char *buff)
{
  print(licencemsg);
  *buff = '\0';
}

void		clean_exit()
{
  print("See U!\n");
  _exit (0);
}
