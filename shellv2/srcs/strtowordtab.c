/*
** strtowordtab.c for strtowordtab in /home/bender/Blinux/bender/Snippets/strtowordtab/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Dec 27 21:34:57 2016 John Doe
** Last update	Tue Dec 27 22:42:24 2016 John Doe
*/

#include "strtowordtab.h"

void			init_that(t_count *count)
{
  count->i = 0;
  count->j = 0;
  count->wrd = 0;
}

char			**strtowordtab(char *str, char delim)
{
  char		**wordtab;
  t_count	count;

  init_that(&count);
  if ((wordtab = malloc(sizeof(*wordtab) * argumentcount(str, delim))) == NULL)
    printerr(strerror(errno));
  while (str[count.i] && str[count.i] != '\n')
 {
      if (str[count.i] == delim || str[count.i] == '\n')
	{
	  while (str[count.i] == delim)
	    count.i++;
	  count.wrd = 0;
	  count.j++;
	}
      if ((wordtab[count.j] = malloc(sizeof(*wordtab[count.j]) * \
			       ((argumentcount(str + count.i, delim) + 1)))) == NULL)
	printerr(strerror(errno));
      while (str[count.i] != delim  && str[count.i] && str[count.i] != '\n')
	wordtab[count.j][count.wrd++] = str[count.i++];
      wordtab[count.j][count.wrd + 1] = '\0';
    }
  wordtab[count.j + 1] = 0;
  return (wordtab);
}
