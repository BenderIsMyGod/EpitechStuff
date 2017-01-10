/*
** main.c for Test in /home/bender/GrowUp/snippetsandmore/shellv1/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Wed Dec 28 14:09:25 2016 John Doe
** Last update	Wed Dec 28 14:11:23 2016 John Doe
*/

#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int			main(int argc, char *argv[])
{
  pid_t cpid, w;
  int wstatus;

  cpid = fork();
    if (cpid == -1) {
      perror("fork");
      exit(EXIT_FAILURE);
    }
    if (cpid == 0) {            /* Code executed by child */
      printf("Child PID is %ld\n", (long) getpid());
      if (argc == 1)
	pause();                    /* Wait for signals */
      _exit(atoi(argv[1]));

    } else {                    /* Code executed by parent */
	do {
	  w = waitpid(cpid, &wstatus, WUNTRACED | WCONTINUED);
	    if (w == -1) {
	      perror("waitpid");
	      exit(EXIT_FAILURE);
	    }
	    if (WIFEXITED(wstatus)) {
	      printf("exited, status=%d\n", WEXITSTATUS(wstatus));
	    } else if (WIFSIGNALED(wstatus)) {
	      printf("killed by signal %d\n", WTERMSIG(wstatus));
	    } else if (WIFSTOPPED(wstatus)) {
	      printf("stopped by signal %d\n", WSTOPSIG(wstatus));
	    } else if (WIFCONTINUED(wstatus)) {
	      printf("continued\n");
	    }
	} while (!WIFEXITED(wstatus) && !WIFSIGNALED(wstatus));
      exit(EXIT_SUCCESS);
    }
}
