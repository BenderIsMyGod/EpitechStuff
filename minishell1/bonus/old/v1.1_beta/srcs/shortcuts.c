/*
** shortcuts.c for PshellV2 in /home/bender/GrowUp/snippetsandmore/shellv1/V2/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Dec 27 23:12:45 2016 John Doe
** Last update	Tue Jan 03 15:11:23 2017 Full Name
*/

#include "pshell.h"

void		shortcuts(char *buff, char **env)
{
  if ((buff[0] == 'q' && !buff[1]) || buff[0] == 27)
    clean_exit(buff);
  if (buff[0] == 'h' && !buff[1])
    help(HELP, buff);
  if (buff[0] == 'l' && !buff[1])
    license(LICENSE, buff);
  if ((my_strncmp("exit", buff, 5)))
    clean_exit(buff);
  if ((my_strncmp("setenv", buff, 6)))
    env = set_environ(buff, env);
  if ((my_strncmp("unsetenv", buff, 8)))
    env = unset_environ(buff, env);
}
