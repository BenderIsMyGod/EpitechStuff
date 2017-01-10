/*
** argstotab.c for BOOK in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 17:01:12 2016 John Doe
** Last update	Thu Dec 22 17:03:59 2016 John Doe
*/

#include "book.h"

char		**argstotab(char *str)
{
  char  **buff;
  int		j;
  int		i;

  j = 0;
  i = 0;
  buff = malloc(sizeof(buff) * ac * 2);
  if (buff)
    {
      while (str[i])
	{
	  if ((buff[i] = malloc(sizeof(char) * len(str) + 1)) == NULL)
	    printerr(MEM_ERR);
	  buff[i] = str;
	  i++;
	}
      buff[i] = "\0";
      return (buff);
    }
  printerr(MEM_ERR);
  return (NULL);
}
