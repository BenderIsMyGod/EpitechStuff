/*
** main.c for test in /home/bender
** 
** Made by Junior Bender
** Login   <bender@epitech.net>
** 
** Started on  Mon Feb  6 14:20:00 2017 Junior Bender
** Last update Mon Feb  6 14:49:41 2017 Junior Bender
*/

#include <stdio.h>
#include <stdlib.h>
#define ERROR  (1 << 0)
#define FRAMING_ERROR (1 << 1)
#define PARITY_ERROR (1 << 2)
#define CARRIER_LOST (1 << 3)
#define CHANNEL_DOWN (1 << 4)

int	main(void)
{
  char  flags;

  flags = 0;
  flags = flags | CHANNEL_DOWN;
  //flags |= ERROR;
  if ((flags & ERROR) != 0)
    printf("error flag is set\n");
  else
    printf("No error set\n");
  return (0);
}
