/*
** get_next_line.h for get_next_line in /home/bender/Repo/CPE_2016_getnextline/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sun Jan  8 21:13:56 2017 John Doe
** Last update Thu Jan 12 06:48:20 2017 John Doe
*/

#ifndef READ_SIZE
# define READ_SIZE (10)
#endif

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#include <unistd.h>
#include <stdlib.h>

char						*get_next_line(const int fd);
void						*malloc_this(char *line, size_t len);
void    				my_strcpy(char *src, char *dest, int k);
char						*my_strcat(char *dest, char *src, int k, ssize_t rd);
size_t					len(char *str);

#endif
