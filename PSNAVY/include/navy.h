/*
** navy.h for Navy_bootstrap in /home/bender/Repo/PSU_2016_navy/include/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 30 21:17:49 2017 John Doe
** Last update	Sun Feb 05 22:32:08 2017 Full Name
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


#define FIRSTROWS		" |A B C D E F G H\n-+---------------"

extern int client_pid;

/*
** Tests sources will soon be merged
** if no bug spoted
*/
#define END_TRANSMISSION ((1 << 9) | (1 << 10))

const char 	*byte_to_binary(unsigned int msg);
void				handler_cli(int signum, siginfo_t *info, void *context);
void				send_message(unsigned int message, int pid);
int					cli(void);
int					serv(char *pid);

typedef struct s_com {
  unsigned int reco:1;
  unsigned int start:1;
  unsigned int posc:1;
  unsigned int posi:1;
  unsigned int message:1;
}								t_com;

void				print_message(t_com *ptr, int len);
/*
***************************************************
***************************************************
*/
int			start(const char *pathname);
int			server_game(const char *filename);
int 		client_game(const char *filename, int serv_pid);
int			open_map(const char *name);
int			check_map(const char *path);
int			invalid_char(char *buffer);
int			invalid_pos(char **buffer);
int			checkargs(char *buffer);
char		**map_tobuffer(const char *name);
char		**get_map(const char *pathname);
char		**put_hits(char **map, char *coord);
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
