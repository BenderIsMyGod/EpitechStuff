/*
** shortcuts.c for PshellV2 in /home/bender/GrowUp/snippetsandmore/shellv1/V2/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Dec 27 23:12:45 2016 John Doe
** Last update	Mon Jan 02 17:45:47 2017 Full Name
*/

#include "pshell.h"

void		shortcuts(char *buff)
{
  char *argv[] = { "clear", (char *)0};

  if (buff[0] == 'q' || *buff == EOF || buff[0] == 27)
    clean_exit();
  if (buff[0] == 'h' && buff[1] == '\n')
    help(HELP, buff);
  if (buff[0] == 'l' && buff[1] == '\n')
    license(LICENSE, buff);
  if (buff[0] == 'c' && buff[1] == 'd')
    set_path(buff + 3);
  if (buff[0] == '\f') {
    execve("/usr/bin/clear", argv, __environ); *buff = '\0'; }
  if (buff[0] == 'b' && buff[1] == 'a')
    {
      // exec(BAT);
      *buff = '\0';
    }
}
