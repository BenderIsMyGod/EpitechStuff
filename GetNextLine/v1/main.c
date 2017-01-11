/*
** main.c for GNM in /home/bender/Repo/CPE_2016_getnextline/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sun Jan  8 22:31:57 2017 John Doe
** Last update Wed Jan 11 09:31:21 2017 John Doe
*/

#include "../get_next_line.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	print(char *str);

void	print(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    write(1, &str[i++], 1);
}
int		main(int ac, char **av)
{
  char	*s;
  int		fd;

  if ((!av[1]))
    {
      while ((s = get_next_line(0)))
	{
	  // print("resultat :[");
	  print(s);
	  print("\n");
	  free(s);
	}
      return (0);
    }
}
