/*
** test.c for Test in /home/bender
** 
** Made by Junior Bender
** Login   <bender@epitech.net>
** 
** Started on  Mon Dec  5 15:08:36 2016 Junior Bender
** Last update Mon Dec  5 15:40:39 2016 Junior Bender
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list t_list;

struct s_list {
  char *strs;
  int  toto;
  t_list *next;
};

int	     fill_struct(t_list **list, char *str, int a)
{
  t_list     *tmp;

  tmp = malloc(sizeof(t_list));
  if (tmp)
    {
      tmp->strs = str;
      tmp->toto = a; 
      tmp->next = list;
    }
  else
    return (84);
  return (0);
}

int		main(int ac, char **av)
{
  t_list	list;

  list = NULL;
  list = fill_struct(list, strdup("coucou"));
  printf("list : %s\n", list);
  return (0);
}
