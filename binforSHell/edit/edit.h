/*
** edit.h for Edit in /home/bender/parrot/home/bender/GrowUp/snippetsandmore/binforSHell/edit/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Dec 31 10:51:24 2016 John Doe
** Last update	Sat Dec 31 11:51:12 2016 Full Name
*/

#ifndef EDIT_H_
# define EDIT_H_

#define ERRARGS	"Err args\n\tUsage: ./edit \"existing or new \
filename\" \"str to add\"\n\t(and optionnaly \"r\" option for reading after writing)\n"

#include "strtowordtab.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

void		print(char *str);
void		printerr(char *errmsg);
ssize_t	len(char *str);
off_t		stat_size(char *filename);
FILE		*open_that(char *filename);


#endif
