/*
** cat.h for BinForShell in /home/bender/GrowUp/snippetsandmore/binforSHell/pcat/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Dec 30 09:44:35 2016 John Doe
** Last update	Fri Dec 30 14:10:21 2016 John Doe
*/

#ifndef CAT_H_S
# define CAT_H_S

#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFERSIZE	4096

int				open_that(char *filename);
void			print(char *str);
void			printerr(char *errmsg);
ssize_t		len(char *str);
off_t			stat_size(char *filename);
#endif
