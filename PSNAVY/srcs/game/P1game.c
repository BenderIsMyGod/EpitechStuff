/*
** P1game.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/game/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Feb 11 11:44:49 2017 John Doe
** Last update Sun Feb 19 08:49:27 2017 John Doe
*/

#include "navy.h"
#include <stdlib.h>

/*
** this function wait for
** the other player connection
** return 1 if connection engaged.
*/
int				wait_forP2(struct sigaction *init)
{
  init->sa_sigaction = initcom;
  sigemptyset(&init->sa_mask);
  init->sa_flags = SA_SIGINFO;
  p_printf(1, "my_pid: %d\n", getpid());
  p_printf(1, "waiting for enemy connexion...\n");
  sigaction(SIGUSR1, init, NULL);
  sigaction(SIGUSR2, init, NULL);
  pause();
  return (1);
}
/*
** Main game loop for
** first player. Handle
** sigaction struct initialisation
** and buffer filling (map and counters)
*/
int				P1_game(const char *filename)
{
  t_map   *map;
  struct sigaction init;

  if ((map = malloc(sizeof(*map))) == NULL)
    return (-1);
  if (check_f(filename, map) == -1)
    return (-1);
  proto.ptr.map = map;
  proto.oldact = &init;
  if (wait_forP2(&init))
    {
      usleep(900000);
      proto.turn = 1;
      affich_map(proto.ptr.map);
      M_loop();
    }
  free(map);
  return (0);
}
