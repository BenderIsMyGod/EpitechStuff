/*
** test.c for BOOK in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 17:52:19 2016 John Doe
** Last update	Thu Dec 22 18:14:05 2016 John Doe
*/

#include <sys/wait.h>
#include "book.h"

int 				init_pid(char *buff)
{
  int 			pipefd[2];
  pid_t 		cpid;

  if (pipe(pipefd) == -1)
    errors(errno);
  cpid = fork();
    if ((cpid = fork()) == -1)
    errors(errno);
  if (cpid == 0)
    {
      close(pipefd[1]);
      while (read(pipefd[0], &buff, 1) > 0)
	write(STDOUT_FILENO, &buff, 1);
      write(STDOUT_FILENO, "\n", 1);
      close(pipefd[0]);
      _exit(EXIT_SUCCESS);
    }
  else
    {
      close(pipefd[0]);
      write(pipefd[1], buff, len(buff));
      close(pipefd[1]);
      wait(NULL);
      exit(EXIT_SUCCESS);
    }
}
