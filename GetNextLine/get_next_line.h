/*
** get_next_line.h for GNL in /home/bender/Repo/CPE_2016_getnextline
**
** Made by Junior Bender
** Login   <bender@epitech.net>
**
** Started on  Sat Jan 14 12:37:29 2017 Junior Bender
** Last update Sat Jan 14 14:30:35 2017 John Doe
*/

#ifndef READ_SIZE
# define READ_SIZE (10)
#endif

#ifndef GET_NEXT_LINE_H_
#define GET_NEXT_LINE_H_

#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(const int fd);

#endif
