/*
** navy.h for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/include/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 09:24:32 2017 John Doe
** Last update Sat Feb 11 16:13:43 2017 John Doe
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

/* ********************************* */
/*
** communication protocol functions
** and structures.
*/
#define END_TRANSMISSION(a, b) ((1 << a) | (1 << b))

typedef struct s_sender {
  int		k;
  const char *bfr;
  unsigned int msg[4];
  int		i;
}							t_sender;

struct data {
  unsigned int message;
  int  	sender_pid;
  char   bfr[10];
  t_map  *map;
};

struct count {
  struct data ptr;
  struct sigaction *oldact;
  int	turn;
  int pos;
  int count;
};

struct count proto;

int					receiver(struct sigaction oldact);
int					sender(int pid, struct sigaction oldact);
int					isokcmd(char *cmd);
void 				swap(char *xp, char *yp);
void				receive_msg(int signum, siginfo_t *info, void *context);
void					send_message(const char *message, int pid, \
						     struct sigaction oldact);
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
int			P1_game(const char *filename);
int 		P2_game(const char *filename, int serv_pid);
void		initcom(int signum, siginfo_t *info, void *context);
void		pphandler(int signum, siginfo_t *info, void *context);

#endif
