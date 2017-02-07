/*
** my.h for test in /home/bender/snippets/convertbase/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Feb  6 11:17:52 2017 John Doe
** Last update Mon Feb  6 11:20:44 2017 John Doe
*/

#ifndef __MY_H_
# define __MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define SWAP(a, b)				({a ^= b; b ^= a; a ^= b;})
#define CAP(a)						(a - 32)
#define LOW(a)						(a + 32)
#define ISCHAR(a)					(((a) >= 'A' && (a) <= 'z') ? (0) : (1))
#define ISCAP(b)					(((b) >= 'A' && (b) <= 'Z') ? (0) : (1))

inline char *lowercase_ize(char *)__attribute__((always_inline));
#endif
