/*
** games.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/v1.1/srcs/game/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Wed Feb  1 19:13:35 2017 John Doe
** Last update	Sun Feb 05 22:38:53 2017 Full Name
*/

#include "navy.h"

int			wait_forP1(struct sigaction *init, int pid)
{
  p_printf(1, "[t'est dans wait for P1]\n");
  proto.ptr.sender_pid = pid;
  init->sa_sigaction = initcom;
  sigemptyset(&init->sa_mask);
  init->sa_flags = SA_SIGINFO;
  p_printf(1, "my_pid: %d\n", getpid());
  kill(pid, SIGUSR1);
  sigaction(SIGUSR1, init, NULL);
  sigaction(SIGUSR2, init, NULL);
  pause();
  return (0);
}

int 		P2_game(const char *filename, int pid)
{
  t_map	*map;
  struct sigaction init;

  if ((map = malloc(sizeof(*map))) == NULL)
    errors("Malloc error\n", 84);
  check_f(filename, map);
  proto.turn = 0;
  wait_forP1(&init, pid);
  p_printf(1, "[t'est dans P2_game]\n");
  proto.oldact = &init;
  proto.ptr.map = map;
  affich_map(proto.ptr.map);
  p_printf(1, "Waiting for enemy's attack...");
  receiver(init);
  free(map);
  return (0);
}

int			gameplay(struct sigaction oldaction)
{
  struct sigaction pingpong;

  pingpong.sa_sigaction = pphandler;
  sigemptyset(&pingpong.sa_mask);
  pingpong.sa_flags = SA_SIGINFO;
  sigaction(SIGUSR1, &pingpong, &oldaction);
  sigaction(SIGUSR2, &pingpong, &oldaction);
  if (!(receiver(pingpong)))
  pause();
  if (!(sender(proto.ptr.sender_pid, oldaction)))
  pause();
  return (0);
}
