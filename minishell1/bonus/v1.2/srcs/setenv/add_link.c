/*
** add_link.c for Minishell1 in /home/bender/Repo/PSU_2016_minishell1/v1.2/srcs/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Wed Jan 18 13:59:57 2017 John Doe
** Last update Wed Jan 18 19:45:31 2017 John Doe
*/

#include "setenv.h"

t_env		*env_inalist(char **environ)
{
  int			i;
  t_env	*list;
  t_env	*tmp;

  i = 0;
  list = NULL;
  while (environ[i] != NULL)
    {
      tmp = malloc(sizeof(*tmp));
      tmp->data = environ[i];
      tmp->next = list;
      list = tmp;
      i++;
    }
  return (list);
}
void		free_list(t_env *list)
{
  t_env *next;

  while (list != NULL)
    {
      next = list->next;
	  free(list);
      list = next;
    }
}

void		pprintenv(t_env *list)
{
  while (list != NULL)
    {
      write(1, list->data, len(list->data) + 1);
      write(1, "\n", 1);
      list = list->next;
    }
  write(1, "\n", 1);
}
