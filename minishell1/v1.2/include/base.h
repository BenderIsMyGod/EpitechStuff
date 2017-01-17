/*
** base.h for minishell1 in /home/bender/GrowUp/snippetsandmore/minishell1/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 16 22:38:38 2017 John Doe
** Last update Tue Jan 17 22:15:53 2017 John Doe
*/

#ifndef BASE_H_
# define BASE_H_

#include "errors.h"
#include <unistd.h>

/*
** string.c aka string.h
*/
ssize_t	len(const char *str);
int			pprint(const char *str, int fd);
int			strn_cmp(const char *s1, const char *s2, size_t n);
char		*my_strcat(char *dest, const char *src);
char		*my_strdup(const char *src);

/*
** stdlib adapted
*/
int			open_that(const char *pathname);
int			check_thatbinary(const char *name);

/*
** The mother function here :
** strtowordtab !
*/
int			init_buffer(char *str, const char *delim, char ***tab);
int			word_count(char c, const char *delim);
int			check_words(char c, const char *delim);
void		move_str(int *i, int *linesize, char *str, const char *delim);
char		**strto_wordtab(char *str, const char *delim);



#endif
