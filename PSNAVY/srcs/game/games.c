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

void		pphandler(int signum, siginfo_t *info, void *context)
{
  static int p1 = 0;
  static int p2 = 0;

  if (signum == SIGUSR1)
    {
      p1++;
      kill(info->si_pid, SIGUSR2);
    }
  else if (signum == SIGUSR2)
    {
      p2++;
      kill(info->si_pid, SIGUSR1);
    }
}
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
  affich_map(map);
  sender(proto.ptr.sender_pid);
  // pause();
  // receiver(init);
  free(map);
  return (0);
}

int			wait_forP1(struct sigaction *init, int pid)
{
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
int			gameplay(struct sigaction oldaction)
{
  struct sigaction pingpong;

  pingpong.sa_sigaction = pphandler;
  sigemptyset(&pingpong.sa_mask);
  pingpong.sa_flags = SA_SIGINFO;
  sigaction(SIGUSR1, &pingpong, NULL);
  sigaction(SIGUSR2, &pingpong, NULL);
  if (!(receiver(pingpong)))
    pause();
  if (!(sender(proto.ptr.sender_pid)))
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
  wait_forP1(&init, pid);
  proto.ptr.map = map;
  affich_map(proto.ptr.map);
  p_printf(1, "Waiting for enemy's attack...");
  // gameplay(init);
  receiver(init);
  free(map);
  return (0);
}
