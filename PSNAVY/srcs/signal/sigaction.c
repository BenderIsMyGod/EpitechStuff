/*
** sigaction.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/signal/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Jan 31 14:37:07 2017 John Doe
** Last update Fri Feb 10 12:00:11 2017 John Doe
*/

#include "navy.h"

void		wait_forserv(int pid, struct sigaction cli)
{
  p_printf(1, "my_pid : %d\n", getpid());
  kill(pid, SIGUSR1);
  sigaction(SIGUSR2, &cli, NULL);
  pause();
}
void			initsig_server(struct sigaction *serv)
{
  serv->sa_sigaction = handler_server;
  sigfillset(&serv->sa_mask);
  serv->sa_flags = SA_SIGINFO;
}
void		initsig_client(struct sigaction *client)
{
  client->sa_sigaction = handler_client;
  sigfillset(&client->sa_mask);
  client->sa_flags = SA_SIGINFO;
}
void			wait_forclient(struct sigaction serv)
{
  p_printf(1, "my_pid : %d\n", getpid());
  p_printf(1, "Waiting for ennemy connexion \033[1m...\033[0m\n");
  sigaction(SIGUSR1, &serv, NULL);
  sigaction(SIGQUIT, &serv, NULL);
  pause();
}
