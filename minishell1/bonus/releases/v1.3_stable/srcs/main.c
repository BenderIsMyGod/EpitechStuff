/*
** main.c for Minishell1 in /home/bender/REpO/TEk1/PSU_2016_minishell1/v1.3_stable/srcs/
**
** Made by John Doe
** Login   <Bender@epitech.eu>
**
** Started on  Sat Jan 21 16:08:24 2017 John Doe
** Last update	Sun Jan 22 09:52:29 2017 Full Name
*/

#include "shell1.h"
#include <errno.h>
#include <stdio.h>
#include <sys/wait.h>

t_env		*add_toenv(const char *newdata, int pos);
int 		list_size(t_env *list);


int					main(int ac, char **av, char **environ)
{
  t_env			*env;

  ac = ac + 42;
  // av = av + 42;
  env = env_inlist(environ);
  // if ((isatty(0)))
  //   pprint("42sh>> ", 1);
  // if ((execshell(environ, env)) == 1)
  //   return (1);
  if ((av[1]))
    env = add_toenv(av[1], 'f');
  printf("valeur de taille :[%d]\n", list_size(env));
  pprintenv();
  free_list(env);
  return (0);
}
