/*
** main.c for GNM in /home/bender/Repo/CPE_2016_getnextline/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sun Jan  8 22:31:57 2017 John Doe
** Last update Sun Jan  8 23:47:54 2017 John Doe
*/

#include "../get_next_line.h"

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

  while ((s = get_next_line(0)))
    {
      print(s);
      print("\n");
      free(s);
    }
  return (0);
}
