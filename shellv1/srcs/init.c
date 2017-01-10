/*
** init.c for BOOK in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 09:52:04 2016 John Doe
** Last update	Thu Dec 22 15:03:36 2016 John Doe
*/

#include "book.h"

t_data			*init(t_data *list, char *filename)
{
  if ((list = malloc(sizeof(list))) == NULL)
    errors(errno);
  list->filename = filename;
  list->fd = open_that(list->filename, O_RDONLY);
  return (list);
}
