/*
** main.c for STRCMP in /home/bender/snippets/strcmp/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Jan  9 12:06:26 2017 John Doe
** Last update Mon Jan  9 12:10:01 2017 John Doe
*/

 #include <stdio.h>

int			my_strncmp(char *s1, char *s2, int n)
{
  int		i;

  i = 0;
  while (i <= n && s1[i] == s2[i])
    i++;
  if ((i))
    return (i);
  return (0);
}
int			main(int ac, char **av)
{
  if ((my_strncmp(av[1], av[2], 3)))
    {
      printf("ok\n");
      return (0);
    }
  printf("pas ok\n");
  return (0);
}
