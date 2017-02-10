/*
** sigauxbitwised.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 09:23:24 2017 John Doe
** Last update Fri Feb 10 09:23:32 2017 John Doe
*/

#include "navy.h"
#include <string.h>

const char 		*byte_to_binary(unsigned int x)
{
  int 				z;
  static char b[17];
  b[0] = '\0';

  z = 512;
  while (z > 0)
    {
      my_strcatvs(b, ((x & z) == z) ? "1" : "0");
      z >>= 1;
    }
  return (b);
}
void					send_message(unsigned int message, int pid)
{
  int					k;
  const char *bfr;

  k = 15;
  bfr = byte_to_binary(message);
  while (k != -1)
    {
      if (bfr[k] == '0')
	{
	  usleep(1000);
	  kill(pid, SIGUSR1);
	}
      else if (bfr[k] == '1')
	{
	  usleep(1000);
	  kill(pid, SIGUSR2);
	}
      k--;
    }
  write(1, "\n", 1);
}

unsigned int	*pack_message(char *msg)
{
  unsigned int *message;

  if ((message = malloc(sizeof(*message) * len(msg) + 1)) == NULL)
    _exit (84);
  while (msg)
    {
      *message = *msg;
      msg++;
    }
  message[len(msg) + 1] ^= END_TRANSMISSION(9, 10);
  return (message);
}
