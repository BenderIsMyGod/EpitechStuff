/*
** main.c for strtowordtab in /home/bender/Snippets/strtowordtab/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Dec 24 23:01:13 2016 John Doe
** Last update	Tue Dec 27 21:38:30 2016 John Doe
*/

#include "strtowordtab.h"

int			main(int ac, char **av)
{
  char c = ' ';
  char *str = av[1];
  char **wordtab;

  wordtab = NULL;
  wordtab = strtowordtab(str, ' ');
  for (int i = 0; wordtab[i]; i++) {
    print(wordtab[i]);print ("\n"); }
  return (0);
}
