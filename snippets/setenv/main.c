/*
** main.c for Minishell1 in /home/bender/snippets/setenv/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Wed Jan 18 16:31:42 2017 John Doe
** Last update Wed Jan 18 17:06:25 2017 John Doe
*/

#include "setenv.h"

int				main(int ac, char **av, char **environ)
{
  t_env	*env;

  if ((ac) && (av))
    {
      env = env_inalist(&environ[0]);
      pprintenv(env);
    }
  free_list(env);
  return (0);
}
