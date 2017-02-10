/*
** test.c for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/srcs/test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Fri Feb 10 09:23:40 2017 John Doe
** Last update Fri Feb 10 11:38:50 2017 John Doe
*/

#include "navy.h"
#include <signal.h>

#define SET_O(pos) (0 << pos)
#define SET_ONE(pos) (1 << pos)
#define swap(a, b) a ^= b ^= a ^= b;

/*
** The function below is for now a simple message printer
** with message parsing (swap if coord in wrong order,
**	and capitalize it if not)
** But will become the main message transmitter to the
** check for win or loose function
*/
void		print_message(void)
{
  if (proto.count == 2)
    {
      proto.ptr.bfr[proto.count + 1] = '\0';
      if ((is_num(proto.ptr.bfr[0])))
	swap(proto.ptr.bfr[0], proto.ptr.bfr[1]);
      if ((is_lwcse(proto.ptr.bfr[0])))
	proto.ptr.bfr[0] -= 32;
      if (!(checkargs(proto.ptr.bfr)))
	p_printf(1, "%s: %s\n", proto.ptr.bfr, "miss");
      proto.ptr.bfr[0] = '\0';
      proto.count = 0;
    }
}
/* ******************************* */

void		initcom(int signum, siginfo_t *info, void *context)
{
  if (signum == SIGUSR1)
    p_printf(1, "enemy connected\n\n");
  else if (signum == SIGUSR2)
    p_printf(1, "successfully connected\n\n");
  proto.ptr.sender_pid = info->si_pid;
}

void		receive_msg(int signum, siginfo_t *info, void *context)
{
  if (signum == SIGUSR1)
    {
      proto.ptr.message |= SET_O(proto.pos);
      proto.pos++;
    }
  else if (signum == SIGUSR2)
    {
      proto.ptr.message |= SET_ONE(proto.pos);
      proto.pos++;
    }
  if ((proto.pos == 10) && (proto.ptr.message & END_TRANSMISSION(9, 10)))
    {
      proto.ptr.bfr[proto.count++] = proto.ptr.message;
      print_message();
      proto.ptr.message = '\0';
      proto.pos = 0;
    }
}

int			receiver(void)
{
  struct sigaction cli;
  struct sigaction init;
  int		 c;

  cli.sa_sigaction = receive_msg;
  init.sa_sigaction = initcom;
  sigemptyset(&cli.sa_mask);
  sigemptyset(&init.sa_mask);
  cli.sa_flags = init.sa_flags = SA_SIGINFO;
  p_printf(1, "My pid:  %d\n", getpid());
  p_printf(1, "waiting for ennemy connection...\n");
  sigaction(SIGUSR1, &init, NULL);
  sigaction(SIGUSR2, &init, NULL);
  while (read(0, &c, 1))
    {
      sigaction(SIGUSR1, &cli, &init);
      sigaction(SIGUSR2, &cli, &init);
    }
  return (0);
}
