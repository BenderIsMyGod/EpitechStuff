/*
** graph.c for Graph test in /home/bender
** 
** Made by Junior Bender
** Login   <bender@epitech.net>
** 
** Started on  Mon Feb  6 14:53:35 2017 Junior Bender
** Last update Mon Feb  6 16:10:32 2017 Junior Bender
*/

#include <stdio.h>

#define X_SIZE 20
#define Y_SIZE 40

char	graphics[X_SIZE / 8][Y_SIZE];

#define SET_BIT(x, y) graphics[(x) / 8][y] |= (0x80 >> ((x) %8))

void	print_graphics(void)
{
  int	x;
  int	y;
  unsigned int bit;
  
  for (y = 0; y < Y_SIZE; ++y) {
    /* Loop for each byte in the array */
    for (x = 0; x < X_SIZE / 8; ++x) {
	  /* Handle each bit */
      for (bit = 0x80; bit > 0; bit = (bit >> 1)) {
	if ((graphics[x][y] & bit) != 0)
	  printf("X");
	else
	  printf(".");
      }
    }
    printf("\n");
  }
}
int	main(void)
{
  int	loc;
  void print_graphics(void);

  loc = 0;
  while (loc < X_SIZE)
    {
      SET_BIT(loc, loc);
      ++loc;
    }
  print_graphics();
  return (0);
}
