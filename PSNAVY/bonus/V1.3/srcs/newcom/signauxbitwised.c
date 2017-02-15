/*
** sigauxbitwised.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 09:23:24 2017 John Doe
** Last update Sat Feb 11 17:05:09 2017 John Doe
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
void					init_list(t_sender *list, const char *message)
{
  list->i = 0;
  list->k = 15;
  list->msg[0] = message[0];
  list->msg[1] = message[1];
}
void					init_pingpong(struct sigaction oldact)
{
  struct sigaction pingpong;

  p_printf(1, "[t'est dans init_pingpong]\n");
  pingpong.sa_sigaction = pphandler;
  sigemptyset(&pingpong.sa_mask);
  pingpong.sa_flags = SA_SIGINFO;
  sigaction(SIGUSR1, &pingpong, &oldact);
  sigaction(SIGUSR2, &pingpong, &oldact);
}
void					send_message(const char *message, int pid, \
						     struct sigaction oldact)
{
  t_sender		list;

  init_pingpong(oldact);
  p_printf(1, "[t'est void send_message]\n");
  init_list(&list, message);
  while (list.i != 2)
{
      list.msg[list.i] ^= END_TRANSMISSION(9, 10);
      list.bfr = byte_to_binary(list.msg[list.i]);
      while (list.k != -1)
	{
	  if (list.bfr[list.k] == '0')
	    {
	      kill(pid, SIGUSR1);
	      pause();
	    }
	  else if (list.bfr[list.k] == '1')
	    {
	      kill(pid, SIGUSR2);
	      pause();
	    }
	  list.k--;
	}
      list.k = 15;
      list.i = list.i + 1;
    }
}
