/*
** loop.c for BOOK in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 14:18:16 2016 John Doe
** Last update	Fri Dec 23 21:01:26 2016 John Doe
*/

#include "book.h"

void		 exec(char *buff)
{
  FILE		*pipe;
  ssize_t	frd;
  char		ptr[CMDSIZE];

  if ((buff[0] ==  'c' && buff[1] == 'd'))
    {
      buff[len(buff) -1] = '\0';
      fchdir(open_that(buff + 3, O_RDONLY));
    }
  if ((pipe = popen(buff, "r")) == NULL)
    errors(errno);
  while ((fgets(ptr, CMDSIZE, pipe)) != NULL)
    print(ptr);
  pclose(pipe);
}
void		set_path(char *path)
{
  int		dir;

  dir = 0;
  print(path);
  if ((dir = chdir(path)) == -1)
    errors(errno);
}
void		clean_exit()
{
  print("See U!\n");
  exit (0);
}

void		loop()
{
  char		buff[READSIZE + 1];
  ssize_t	rd;

  rd = 0;
  while ((rd = read(STDIN_FILENO, buff, READSIZE)) != 0)
{
      if (buff[0] == 'q' || *buff == EOF || buff[0] == 27)
	clean_exit();
      if (buff[0] == 'h' && buff[1] == '\n')
	help(HELP, buff);
      if (buff[0] == 'l' && buff[1] == '\n')
	license(LICENSE, buff);
      if (buff[0] == '\f') {
	exec("clear"); *buff = '\0'; }
      if (buff[0] == 'b' && buff[1] == 'a') {
	exec(BAT); *buff = '\0'; }
      buff[rd] = '\0';
      exec(buff);
      print(PROMPT);
    }
}
