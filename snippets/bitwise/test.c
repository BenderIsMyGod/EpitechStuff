/*
** test.c for Test in /home/bender/snippets/bitwise/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Feb  6 16:16:14 2017 John Doe
** Last update Tue Feb  7 00:57:07 2017 John Doe
*/

#include "test.h"
#include <signal.h>

#define SET_O(pos) (0 << pos)
#define SET_ONE(pos) (1 << pos)

void		handler_cli(int signum, siginfo_t *info, void *context)
{
  static unsigned char message = 0;
  static int pos = 0;

  if (signum == SIGUSR1)
    {
      write(1, "SIGUSR1 recu\n", 14);
      message |= SET_O(pos);
      pos++;
    }
  else if (signum == SIGUSR2)
    {
      write(1, "SIGUSR2 recu\n", 14);
      message |= SET_ONE(pos);
      pos++;
    }
  printf("\n[%s] et pos : [%d]\n", byte_to_binary(message), pos);
  if ((message & 10) == 1)
    {
      printf("%c\n\n", BCDMAKE(message));
      pos = 0;
      pause();
    }
}
