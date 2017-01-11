/*
** get_next_line.h for get_next_line in /home/bender/Repo/CPE_2016_getnextline/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sun Jan  8 21:13:56 2017 John Doe
** Last update Wed Jan 11 09:32:04 2017 John Doe
*/

#ifndef READ_SIZE
# define READ_SIZE (10)
#endif

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#include <unistd.h>
#include <stdlib.h>

char				*get_next_line(const int fd);
char				*my_strcat(char *dest, char *src, int k);
void    		my_strcpy(char *src, char *dest, int k);
size_t			len(char *str);

#endif
