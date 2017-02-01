/*
** navy.h for Navy_bootstrap in /home/bender/Repo/PSU_2016_navy/include/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 30 21:17:49 2017 John Doe
** Last update Wed Feb  1 21:00:12 2017 John Doe
*/

#ifndef NAVY_H_
# define NAVY_H_

#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>

#include "usage.h"
#include "base.h"
#include "errors.h"
#include "get_next_line.h"
#include "printf.h"
#include "strtowordtab.h"

#define FIRSTROW 		" |A B C D E F G H\n"
#define SECONDROW		"-+---------------\n"

int			start(const char *pathname);
int			server_game(const char *filename);
int 		client_game(const char *filename, int serv_pid);
int			open_map(const char *name);
int			check_map(const char *path);
int			invalid_pos(char **buffer);
char		**map_tobuffer(const char *name);
char		**get_map(const char *pathname);
void		print_position(char **map);
void		print_awesome_emptymap(void);
void		handler_client(int signum, siginfo_t *ptr, void *bfr);
void		handler_server(int signum, siginfo_t *ptr, void *bfr);
void		send_okto_serv(int pid, struct sigaction cli);
void		initsig_server(struct sigaction *serv);
void		initsig_client(struct sigaction *client);
void		wait_forclient(struct sigaction serv);
void		wait_forserv(int pid, struct sigaction cli);

#endif
