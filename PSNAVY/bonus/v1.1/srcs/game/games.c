/*
** games.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/v1.1/srcs/game/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Wed Feb  1 19:13:35 2017 John Doe
** Last update Wed Feb  1 20:39:05 2017 John Doe
*/

#include "navy.h"

int				server_game(const char *filename)
{
  struct 	sigaction serv;
  char	**map;

  map = get_map(filename);
  invalid_pos(map);
  initsig_server(&serv);
  wait_forclient(serv);
  p_printf(1, "my positions:\n\n");
  p_printf(1, "ennemy's positions:\n");
  print_awesome_emptymap();
  while ((42))
    {
      p_printf(1, "\nsignal received\n");
      sigaction(SIGUSR1, &serv, NULL);
      sigaction(SIGUSR2, &serv, NULL);
      sigaction(SIGQUIT, &serv, NULL);
      sleep(42);
      if (sigaction(SIGINT, &serv, NULL) == -1)
	errors("./navy: Sigaction failed\n", 84);
    }
  freetab(map);
  return (0);
}
int 		client_game(const char *filename, int serv_pid)
{
  struct sigaction cli;
  char	**map;

  map = get_map(filename);
  invalid_pos(map);
  initsig_client(&cli);
  wait_forserv(serv_pid, cli);
  p_printf(1, "my positions:\n\n");
  p_printf(1, "ennemy's positions:\n");
  print_awesome_emptymap();
  while ((42))
    {
      p_printf(1, "\nsignal received\n");
      sigaction(SIGUSR1, &cli, NULL);
      sigaction(SIGUSR2, &cli, NULL);
      sigaction(SIGQUIT, &cli, NULL);
      sleep(42);
      if (sigaction(SIGINT, &cli, NULL) == -1)
	errors("./navy: Sigaction failed\n", 84);
    }
  freetab(map);
  return (0);
}
