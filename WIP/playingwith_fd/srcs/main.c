/*
** main.c for Getline in /home/bender/GrowUp/snippetsandmore/getline/srcs/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 29 08:17:26 2016 John Doe
** Last update	Thu Dec 29 10:17:05 2016 John Doe
*/

#include "playwith_fd.h"

int							main(int ac, char **av, char **env)
{
  ssize_t				rd;
  int 					link[2];
  pid_t 				pid;
  char 					foo[4096];

  rd = 0;
  if (pipe(link)==-1)
    end(strerror(errno));

  if ((pid = fork()) == -1)
    end(strerror(errno));

  if (ac >= 1)
    {
      if (pid == 0)
	{
	  dup2(link[1], STDOUT_FILENO);
	  close(link[0]);
	  close(link[1]);
	  execve(av[1], av, env);
	  end(strerror(errno));
	}
      else
	{
	  close(link[1]);
	  int nbytes = read(link[0], foo, sizeof(foo));
	  printf("Output: \n%s \n%d bytes\n", foo, nbytes);
	  wait(NULL);
	  return (0);
	}
    }
  print(USAGE);
  return (0);
}
