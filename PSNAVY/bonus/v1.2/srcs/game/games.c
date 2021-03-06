/*
** games.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/v1.1/srcs/game/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Wed Feb  1 19:13:35 2017 John Doe
** Last update Thu Feb  2 11:53:52 2017 John Doe
*/

#include "navy.h"

int				send_coord(char a, char b, int ennemy_pid)
{
  int			i;

  i = 0;
  while (i != a - '0')
    {
      kill(ennemy_pid, SIGUSR1);
      i++;
    }
  i = 0;
  while (i != b - '0')
    {
      kill(ennemy_pid, SIGUSR2);
      i++;
    }
  return (0);
}
int				servgame_loop(struct sigaction serv)
{
  char		*user_input;

  while ((user_input = get_next_line(0)))
    {
      p_printf(1, "[%s]\n", user_input);
      p_printf(1, "\x1B[0mattack: ");
      p_printf(1, "\x1B[3m");
      // checkargs(user_input);
      send_coord(user_input[0], user_input[1], client_pid);
      clean_free(user_input);
      return (0);
    }
  sigaction(SIGUSR1, &serv, NULL);
  sigaction(SIGUSR2, &serv, NULL);
  sigaction(SIGQUIT, &serv, NULL);
  return (0);
}
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
      // p_printf(1, "\nsignal received\n");
      servgame_loop(serv);
      sleep(42);
      if (sigaction(SIGINT, &serv, NULL) == -1)
	errors("./navy: Sigaction failed\n", 84);
    }
  freetab(map);
  return (0);
}
int			cligame_loop(struct sigaction cli)
{
  char		*user_input;

  p_printf(1, "waiting for ennemy's attack...\n");
  while ((user_input = get_next_line(0)))
    {
      p_printf(1, "\x1B[0mattack: ");
      p_printf(1, "\x1B[3m");
      free(user_input);
    }
  sigaction(SIGUSR1, &cli, NULL);
  sigaction(SIGUSR2, &cli, NULL);
  sigaction(SIGQUIT, &cli, NULL);
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
      cligame_loop(cli);
      sleep(42);
      if (sigaction(SIGINT, &cli, NULL) == -1)
	errors("./navy: Sigaction failed\n", 84);
    }
  freetab(map);
  return (0);
}
