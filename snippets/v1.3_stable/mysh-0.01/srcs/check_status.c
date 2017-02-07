/*
** check_status.c for V1.3_stable in /home/bender/snippets/v1.3_stable/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan 30 11:34:37 2017 John Doe
** Last update Mon Jan 30 11:40:14 2017 John Doe
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "../include/libfunk.h"
#include "../include/shell.h"

int			check_status(int *status)
{
  if (WIFEXITED(*status))
	    return (EXIT_SUCCESS);
	  else if (WIFSIGNALED(*status))
	    {
	      if (WTERMSIG(*status) == 11)
		p_exit(SEGFLT, 139);
	      if (WTERMSIG(*status) == 8)
	p_exit(FPERR, 136);
	    }
  else if (WIFSTOPPED(*status))
    pprint("process stopped\n", 1);
  else if (WIFCONTINUED(*status))
    pprint("continued\n", 1);
while (!WIFEXITED(*status) && !WIFSIGNALED(*status)) {};
  return (EXIT_SUCCESS);
}
