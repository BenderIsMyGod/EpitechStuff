/*
** getline.h for getline in /home/bender/GrowUp/snippetsandmore/getline/include/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 29 08:18:14 2016 John Doe
** Last update	Thu Dec 29 10:20:43 2016 John Doe
*/

#ifndef GETLINE_H_
# define GETLINE_H_
/*
** System call functions headers
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <limits.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
/*
** Signal handler
*/
typedef void (*sighandler_t)(int);
/*
** Error handler define
*/
#define end(errmsg) do { printerr(errmsg); printerr("\n"); exit (84); } while (0);
#define USAGE		"\t=>Not enought arg\n\n\tExemple: ./foo /bin/ls -l .\n"
/*
** Core funct as usual
*/
void		print(char *str);
void		printerr(char *errmsg);
void		put_nbr(long nb);
ssize_t	len(char *str);
#endif
