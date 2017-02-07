/*
** ctrl.c for PSU_2016_navy in /home/bender/snippets/navy/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Feb  2 15:15:09 2017 John Doe
** Last update Thu Feb  2 16:27:45 2017 John Doe
*/

#include "navy.h"

int		send_module(char *bfr, int ennemy_pid)
{
  char	*a = " ABCDEFGH";
  int   b = 0;

  while ((*a) && *a != bfr[0])
    {
      while (b != my_atoi(bfr + 1))
	{
	  usleep(1);
	  kill(ennemy_pid, SIGUSR2);
	  b++;
	}
      usleep(1);
      kill(ennemy_pid, SIGUSR1);
      a++;
    }
  return (0);
}

int			main(int ac, char **av)
{
  int		pid_serv;
  char	*cmd;

  pid_serv = my_atoi(av[1]);
  p_printf(1, "CMD : ");
  while ((cmd = get_next_line(0)))
    {
      send_module(cmd, pid_serv);
      free(cmd);
      p_printf(1, "CMD : ");
    }
  return (0);
}
