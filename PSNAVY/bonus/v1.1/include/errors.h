/*
** errors.h for Libfunk in /home/bender/Snippets/libfunk/include/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sun Jan 29 10:13:45 2017 John Doe
** Last update Sun Jan 29 10:44:23 2017 John Doe
*/

#ifndef ERRORS_H_INCLUDED
# define ERRORS_H_INCLUDED

#include <signal.h>
#include <errno.h>
#include <string.h>

#define FDERR 	"Bad file descriptor"
#define NOEXST	": No such file or directory\n"
#define NOEXEC  ": Command not found.\n"
#define SEGFLT  "Segmentation fault (core dumped)\n"
#define FPERR   "Floating exception (core dumped)\n"
#define NOPERM	": Permission denied.\n"
/*
** got an error? an error message ?
**   an exit code... ???
** call 8.8.4 int errors right now!
*/

int						errors(const char *errmsg, int exitval);
int						p_exit(const char *str, int exitval);
#endif
