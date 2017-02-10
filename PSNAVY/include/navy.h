/*
** navy.h for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/include/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 09:24:32 2017 John Doe
** Last update Fri Feb 10 10:44:35 2017 John Doe
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
#include "map.h"

#define FIRSTROWS		" |A B C D E F G H\n-+---------------"

// extern int client_pid;

/*
** Tests sources will soon be merged
** if no bug spoted
*/
#define END_TRANSMISSION(a, b) ((1 << a) | (1 << b))

struct data {
  unsigned int message;
  int  	sender_pid;
  char   bfr[1000];
};

struct count {
  struct data ptr;
  int pos;
  int count;
};

struct count proto;

int					receiver(void);
int					sender(char *pid);
void				receive_msg(int signum, siginfo_t *info, void *context);
void				send_message(unsigned int message, int pid);
void				print_message(void);
const char 	*byte_to_binary(unsigned int msg);
/*
***************************************************
***************************************************
*/
/*
** Game loops
*/
int			start(const char *pathname);
int			server_game(const char *filename);
int 		client_game(const char *filename, int serv_pid);
/*
************
*/
/*
** Map opening and parsing functions
*/
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
/* ************************** */
/*
** Sigaction aka com protocol
*/
void		handler_client(int signum, siginfo_t *ptr, void *bfr);
void		handler_server(int signum, siginfo_t *ptr, void *bfr);
void		send_okto_serv(int pid, struct sigaction cli);
void		initsig_server(struct sigaction *serv);
void		initsig_client(struct sigaction *client);
void		wait_forclient(struct sigaction serv);
void		wait_forserv(int pid, struct sigaction cli);
/*
****************************
*/
#endif