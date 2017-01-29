/*
** p_printf.h for Libfunk in /home/bender/Snippets/libfunk/include/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sun Jan 29 10:13:19 2017 John Doe
** Last update Sun Jan 29 10:44:45 2017 John Doe
*/

#ifndef P_PRINTF_H_INCLUDED
# define P_PRINTF_H_INCLUDED

#include <stdarg.h>
#include "base.h"
#include "errors.h"

int				flag_match(const char c);
int				flg_d(va_list list, int fd);
int				flg_i(va_list list, int fd);
int				flg_c(va_list list, int fd);
int				flg_s(va_list list, int fd);

int				p_printf(int fd, const char *format, ...);
int				p_putnbr(long nb, int fd);
void			flag_funct(int (*ptr[4])(va_list list, int fd));

#endif
