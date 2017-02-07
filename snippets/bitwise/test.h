/*
** test.h for TEST in /home/bender/snippets/bitwise/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Feb  6 18:30:38 2017 John Doe
** Last update Tue Feb  7 00:04:16 2017 John Doe
*/

#ifndef __TEST_H_
# define __TEST_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

#define READ_SIZE 50
#define END_TRANSMISSION (1 << 10)
#define DECTOBCD(value) (((value & 0xF0) >> 4) * 10) + (value & 0x0F)
#define BCDMAKE(value)	((value / 10) << 4) | (value % 10)

typedef struct s_com {
  unsigned int reco:1;
  unsigned int start:1;
  unsigned int posc:1;
  unsigned int posi:1;
  unsigned int message:9;
} 						t_com;

char				*get_next_line(const int fd);
const char 	*byte_to_binary(unsigned short msg);
void				handler_cli(int signum, siginfo_t *info, void *context);
void				send_message(unsigned short message, int pid);

#endif
