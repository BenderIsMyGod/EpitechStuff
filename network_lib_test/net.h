/*
** net.h for Netlibtest in /home/bender/parrot/home/bender/GrowUp/snippetsandmore/network_lib_test/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Dec 31 12:08:30 2016 John Doe
** Last update	Sat Dec 31 12:53:38 2016 Full Name
*/

#ifndef NET_H_
# define NET_H_

/* For sockaddr_in */
#include <netinet/in.h>
/* For socket functions */
#include <sys/socket.h>
/* For gethostbyname */
#include <netdb.h>

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define HOST	"www.google.com"
#define QUERY "GET / HTTP/1.0\r\n" \
"Host: www.google.com\r\n" \
"\r\n"

typedef struct s_list {
  const char 	*query;
  const char 	*hostname;
  struct sockaddr_in sin;
  struct hostent *h;
  const char 	*cp;
  int 				fd;
  ssize_t 		n_written, remaining;
  char 				buf[1024];
}							t_list;

#endif
