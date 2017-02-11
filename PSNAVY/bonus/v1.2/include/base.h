/*
** base.h for Libfunk in /home/bender/Snippets/libfunk/include/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sun Jan 29 10:13:32 2017 John Doe
** Last update Wed Feb  1 21:01:33 2017 John Doe
*/

#ifndef BASE_H_
# define BASE_H_

#include "errors.h"
#include <unistd.h>
#include <errno.h>
#include <string.h>
/*
** string.c aka string.h
*/
ssize_t	len(const char *str);
int			strn_cmp(const char *s1, const char *s2, size_t n);
char		*my_strcat(char *dest, const char *src);
char		*my_strdup(const char *src);

/*
** stdlib adapted
*/
int			my_stringisnum(const char *str);
int			my_atoi(const char *str);
int			pprint(const char *str, int fd);
char		*my_malloc(char *str, size_t len);
char		**freetab(char **ptr);
char		*clean_free(char *ptr);

char  				*clean_args(const char *str);
const  char		*removetrailingspace(const char *str);

#endif
