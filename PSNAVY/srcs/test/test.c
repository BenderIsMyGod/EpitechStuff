/*
** test.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 09:23:40 2017 John Doe
** Last update Fri Feb 10 09:23:46 2017 John Doe
*/

#include "navy.h"
#include <signal.h>

#define SET_O(pos) (0 << pos)
#define SET_ONE(pos) (1 << pos)

void		print_message(void)
{
  if (proto.count == 2)
    {
      proto.ptr.bfr[proto.count + 1] = '\0';
      p_printf(1, "%s: %s\n", proto.ptr.bfr, "miss");
      proto.ptr.bfr[0] = '\0';
      proto.count = 0;
    }
}

void		receive_msg(int signum, siginfo_t *info, void *context)
{
  if (signum == SIGUSR1)
    {
      proto.ptr.message |= SET_O(proto.pos);
      proto.pos++;
    }
  else if (signum == SIGUSR2)
    {
      proto.ptr.message |= SET_ONE(proto.pos);
      proto.pos++;
    }
  if ((proto.pos == 10) && (proto.ptr.message & END_TRANSMISSION(9, 10)))
    {
      proto.ptr.bfr[proto.count++] = proto.ptr.message;
      print_message();
      proto.ptr.message = '\0';
      proto.pos = 0;
    }
}
