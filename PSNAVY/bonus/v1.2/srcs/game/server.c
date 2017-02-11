/*
** server.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/bonus/v1.2/srcs/game/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Feb  2 12:15:02 2017 John Doe
** Last update Thu Feb  2 12:24:50 2017 John Doe
*/

#include "navy.h"

int		server(struct sigaction serv)
{
  sigaction(SIGUSR1, &serv, NULL);
  sigaction(SIGUSR2, &serv, NULL);
}
