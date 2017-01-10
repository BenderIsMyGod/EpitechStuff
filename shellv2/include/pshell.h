/*
** pshell.h for PShell in /home/bender/Desktop/Snippets/bookv2/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Dec 23 21:11:36 2016 John Doe
** Last update	Wed Dec 28 14:27:35 2016 John Doe
*/

#ifndef PSHELL_H_
# define PSHELL_H_

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <errno.h>
#include <string.h>

#include "strtowordtab.h"
#include "msg.h"

#define BUFFERSIZE		5000
/*
** Signal (ctrl-c) handling
*/
typedef void (*sighandler_t)(int);
/*
** strerror_r function def
** Note : GNU-SPËCIFIC
*/
char *strerror_r(int errnum, char *buf, size_t buflen);
/*
** setenv_r function def
*/
int setenv(const char *name, const char *value, int overwrite);

typedef struct s_data {
  char				buffer[BUFFERSIZE];
  char 				*argv[];
}							t_data;

void			put_nbr(long nb);
ssize_t		len(char *str);
void			exec(char *buff, char **args, char **environ);
void			set_path(char *path);
void			errors(int errnum);
void			clean_exit();
void			shortcuts(char *buff);
void			loop(char **environ);
void			init_env(char **environ);

#endif
