/*
** game_test.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/bonus/V1.3/srcs/game/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Feb 11 21:24:57 2017 John Doe
** Last update Sat Feb 11 22:08:56 2017 John Doe
*/

#include "navy.h"

void		gamehandler(int signum, siginfo_t *info, void *context)
{
  if (info->si_pid == proto.ptr.sender_pid)
    {
      if (signum == SIGUSR1)
	{
	  pause();
	  p_printf(1, "ok s1 reçu\n");
	  kill(proto.ptr.sender_pid, SIGUSR2);
	}
      else if (signum == SIGUSR2)
	{
	  pause();
	  p_printf(1, "ok s2 reçu\n");
	  kill(proto.ptr.sender_pid, SIGUSR2);
	}
    }
}
void		init_gameturn(struct sigaction *ptr)
{
  ptr->sa_sigaction = gamehandler;
  sigemptyset(&ptr->sa_mask);
  ptr->sa_flags = SA_SIGINFO;
}
int			game_p1(t_map *map)
{
  struct sigaction gameturn;

  init_gameturn(&gameturn)
  while ((check_win_loose(proto.ptr.map->map)))
    {
      sigaction(SIGUSR1, &gameturn, NULL);
      sigaction(SIGUSR2, &gameturn, NULL);
      send_message();
      listenforanswer();
      printmap(proto.ptr.map->map);
    }
    return (0);
}

int			game_p2(t_map *map)
{
  while(check_win_loose(proto.ptr.map->map))
    return (0);
}


int 	end_game(int winner)
{
  if (winner == 1)
    {
      p_printf(1, "I won\n");
      return (0);
    }
  if (winner == 0)
    {
      p_printf(1, "Enemy won\n");
      return (0);
    }
  return (0);
}
