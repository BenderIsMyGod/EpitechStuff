/*
** book.h for BOOK in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 09:07:52 2016 John Doe
** Last update	Fri Dec 23 13:50:40 2016 John Doe
*/

#ifndef BOOK_H_
# define BOOK_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

#define		BAT    "upower -i /org/freedesktop/UPower/devices/battery_BAT0 | \
			grep -E \"state|to full|percentage\""
/*
** struct & msg header
*/
#include "msg.h"
#include "struct.h"
/*
** Signal (ctrl-c) handling
*/
typedef void (*sighandler_t)(int);
/*
** core funct
** to be pack in lib
*/
void		print(char *str);
int			len(char *str);
int			isnum(char *str);
void		printerr(char *errmsg);
void		errors(int errnum);
void		put_nbr(long nb);
void		fdprint(char *str, int fd);
void		fpprint(char *str, FILE *fp);
int     isthesame(char *s1, char *s2, ssize_t len);
int			open_that(char *filename, int flags);
/*
** Various graphical funct
** base for conf file in
** future releases
*/
void		help(char *helpmsg, char *buff);
void		license(char *licencemsg, char *buff);
/*
** core loop;
*/
void		loop();
void		clean_exit();
void		exec(char *buff);
/*
** wip
*/
t_data	*init(t_data *list, char *filename);
int 		init_pid(char *buff);
void		init_env(char **environ);
void		set_path(char *path);

#endif
