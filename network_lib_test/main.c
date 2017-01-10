/*
** main.c for Networklibtest in /home/bender/parrot/home/bender/GrowUp/snippetsandmore/network_lib_test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Dec 31 12:07:50 2016 John Doe
** Last update	Sat Dec 31 12:53:24 2016 Full Name
*/

#include "net.h"

void		init_list(t_list *list)
{
  if ((list = malloc(sizeof(*list))) == NULL)
    fprintf(stderr, "%s\n", strerror(errno));
  list->query = QUERY;
  list->cp = NULL;
  list->fd = 0;
  list->remaining = 0;
  list->h = NULL;
}
int		main(int ac, char **av)
{
  const char query[] = QUERY;
  const char hostname[] = "www.google.com";
  struct sockaddr_in sin;
  struct hostent *h;
  const char *cp;
  int fd;
  ssize_t n_written, remaining;
  char buf[1024];
  // t_list			*list;

  // init_list(list);
  /* Look up the IP address for the hostname.   Watch out; this isn't
  threadsafe on most platforms. */
   h = gethostbyname(HOST);
    if (!h) {
      fprintf(stderr, "Couldn't lookup %s: %s", HOST, hstrerror(h_errno));
      return 1;
    }
    if (h->h_addrtype != AF_INET) {
      fprintf(stderr, "No ipv6 support, sorry.");
      return 1;
    }

  /* Allocate a new socket */
  fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0) {
      perror("socket");
      return 1;
    }

  /* Connect to the remote host. */
  sin.sin_family = AF_INET;
  sin.sin_port = htons(80);
  sin.sin_addr = *(struct in_addr*)h->h_addr;
    if (connect(fd, (struct sockaddr*) &sin, sizeof(sin))) {
      perror("connect");
      close(fd);
      return 1;
    }

  /* Write the query. */
  /* XXX Can send succeed partially? */
  cp = query;
  remaining = strlen(query);
    while (remaining) {
      n_written = send(fd, cp, remaining, 0);
	if (n_written <= 0) {
	  perror("send");
	  return 1;
	}
      remaining -= n_written;
      cp += n_written;
    }

  /* Get an answer back. */
    while (1) {
      ssize_t result = recv(fd, buf, sizeof(buf), 0);
	if (result == 0) {
	  break;
	} else if (result < 0) {
	  perror("recv");
	  close(fd);
	  return 1;
	}
      fwrite(buf, 1, result, stdout);
    }
  close(fd);
  return 0;
}
