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

int client_pid = 0;

int			send_coord(char *bfr, int ennemy_pid)
{
  int   b = 0;
  const char	*a;


  a = " ABCDEFGH";
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
int					servgame_loop(struct sigaction serv)
{
  char			*user_input;


  while ((user_input = clean_args(get_next_line(0))))
    {
      send_coord(user_input, client_pid);
      p_printf(1, "[%s]\n", user_input);
      p_printf(1, "\x1B[0mattack: ");
      p_printf(1, "\x1B[3m");
      // checkargs(user_input);
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
