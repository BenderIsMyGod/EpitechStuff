/*
** maintest.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 11:35:49 2017 John Doe
** Last update Fri Feb 10 18:31:05 2017 John Doe
*/

#include "navy.h"

struct count proto = {{0, 0, {0}}, 0, 0};

int			main(int ac, char **av)
{
  struct sigaction oldact;

  oldact.sa_sigaction = initcom;
  sigemptyset(&oldact.sa_mask);
  oldact.sa_flags = SA_SIGINFO;
  if (ac == 2)
    sender(my_atoi(av[1]));
  else if (ac == 1)
    {
      p_printf(1, "pid :%d\n", getpid());
      receiver(oldact);
    }
  return (0);
}
