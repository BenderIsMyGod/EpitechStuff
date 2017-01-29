/*
** setenv.h for Minishell1 in /home/bender/snippets/setenv/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Wed Jan 18 16:32:03 2017 John Doe
** Last update Wed Jan 18 18:06:40 2017 John Doe
*/

#ifndef SETENV_H_
# define SETENV_H_

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct s_env {
char					*data;
struct s_env	*next;
}							t_env;

ssize_t		len(const char *str);
int				strn_cmp(const char *s1, const char *s2, size_t n);
char			*my_strcat(char *dest, const char *src);
char				*my_strdup(const char *src);

t_env			*env_inalist(char **nb);
void			pprintenv(t_env *list);
void			free_list(t_env *list);

#endif
