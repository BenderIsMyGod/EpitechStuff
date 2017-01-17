/*
** errors.h for Minishell1 in /home/bender/GrowUp/snippetsandmore/minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 16 22:42:19 2017 John Doe
** Last update Tue Jan 17 19:19:00 2017 John Doe
*/

#ifndef ERRORS_H_
# define ERRORS_H_

#define FDERR 	"Bad file descriptor"
#define NOEXST	"No such file or directory"
#define NOEXEC  ": Command not found."

/*
** got an error? an error message ?
**   an exit code... ???
** call 8.8.4 int errors right now!
*/
int		errors(const char *errmsg, int exitval);

#endif
