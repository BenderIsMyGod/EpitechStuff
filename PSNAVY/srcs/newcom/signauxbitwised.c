/*
** sigauxbitwised.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 09:23:24 2017 John Doe
** Last update Sat Feb 11 10:13:28 2017 John Doe
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
void					init_list(t_sender *list, char *message)
{
  list->i = 0;
  list->k = 15;
  list->msg[0] = message[0];
  list->msg[1] = message[1];
}
void					send_message(char *message, int pid)
{
  t_sender		list;

  init_list(&list, message);
  while (list.i != 2)
{
      list.msg[list.i] ^= END_TRANSMISSION(9, 10);
      list.bfr = byte_to_binary(list.msg[list.i]);
      while (list.k != -1)
	{
	  if (list.bfr[list.k] == '0')
	    {
	      usleep(1000);
	      kill(pid, SIGUSR1);
	    }
	  else if (list.bfr[list.k] == '1')
	    {
	      usleep(1000);
	      kill(pid, SIGUSR2);
	    }
	  list.k--;
	}
      list.k = 15;
      list.i = list.i + 1;
    }
}
