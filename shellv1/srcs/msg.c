/*
** msg.c for BOOK in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 14:20:53 2016 John Doe
** Last update	Thu Dec 22 15:04:43 2016 John Doe
*/

#include "book.h"

void		errors(int errnum)
{
  char	buf[ERRSIZE];

  printerr("./PShell error :\n\t");
  strerror_r(errno, buf, ERRSIZE);
  printerr(buf);
  printerr("\n");
  exit(84);
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
