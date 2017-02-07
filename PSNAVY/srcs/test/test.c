/*
** test.c for Test in /home/bender/snippets/bitwise/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Feb  6 16:16:14 2017 John Doe
** Last update Tue Feb  7 14:11:23 2017 John Doe
*/

#include "navy.h"
#include <signal.h>

#define SET_O(pos) (0 << pos)
#define SET_ONE(pos) (1 << pos)

void		handler_cli(int signum, siginfo_t *info, void *context)
{
  static unsigned int message = 0;
  static int pos = 0;

  if (signum == SIGUSR1)
    {
      write(1, "0 ", 2);
      message |= SET_O(pos);
      pos++;
    }
  else if (signum == SIGUSR2)
    {
      write(1, "1 ", 2);
      message |= SET_ONE(pos);
      pos++;
    }
  if (pos >= 10 && (message & END_TRANSMISSION))
    {
      p_printf(1, "\nbinary, [%s] et message : [%c]\n", byte_to_binary(message), \
	     message);
      message = '\0';
      pos = 0;
    }
}
