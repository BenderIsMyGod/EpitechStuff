/*
** P1game.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/game/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Feb 11 11:44:49 2017 John Doe
** Last update Sat Feb 11 17:04:01 2017 John Doe
*/

#include "navy.h"

int				wait_forP2(struct sigaction *init)
{
  p_printf(1, "[t'est dans wait for P2]\n");
  init->sa_sigaction = initcom;
  sigemptyset(&init->sa_mask);
  init->sa_flags = SA_SIGINFO;
  p_printf(1, "my_pid: %d\n", getpid());
  p_printf(1, "waiting for enemy connexion...\n");
  sigaction(SIGUSR1, init, NULL);
  sigaction(SIGUSR2, init, NULL);
  pause();
  return (0);
}

int				P1_game(const char *filename)
{
  t_map   *map;
  struct sigaction init;

  if ((map = malloc(sizeof(*map))) == NULL)
    errors("Malloc error\n", 84);
  check_f(filename, map);
  wait_forP2(&init);
  p_printf(1, "[t'est dans P1_game]\n");
  proto.oldact = &init;
  proto.turn = 1;
  affich_map(map);
  sender(proto.ptr.sender_pid, init);
  free(map);
  return (0);
}
