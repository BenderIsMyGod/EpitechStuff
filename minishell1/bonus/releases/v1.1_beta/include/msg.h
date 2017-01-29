/*
** msg.h for BOOK in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 09:10:38 2016 John Doe
** Last update	Wed Dec 28 11:14:44 2016 John Doe
*/

#ifndef MSG_H_
# define MSG_H_

#include "pshell.h"

#define LICENSE		"\n\t\t\t\t\t\x1b[1mMIT License\x1b[0m\n\t\t\t\tCopyright 2017 John\
Doe TEk1\n\nPermission is hereby granted, free of charge, to any person obtain\
ing a copy of this software and associated documentation files (the \
\"Software\") to deal in the Software without restriction, including without \
limitation the rights to use, copy, modify, merge, publish, distribute, \
sublicense, and/or sell copies of the Software, and to permit persons to whom \
the Software is furnished to do so, subject to the following conditions:\n\n \
The above copyright notice and this permission notice shall be included in all \
copies or substantial portions of the Software. \
THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR \
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, \
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE  \
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER \
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, \
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE \
SOFTWARE.\n"

#define LICENSE2 "\t\t\t\x1b[1mDO WHAT THE FUCK YOU WANT TO PUBLIC \
LICENSE\x1b[0m\n\t\t\tVersion 2, December 2004 Copyright (C) 2004 \
\n\t\t\tSam Hocevar <sam@hocevar.net>\n\nEveryone is permitted to copy and \
distribute verbatim or modified copies of this license document, and changing \
it is allowed as long as the name is changed.\n\n\x1b[1mDO WHAT THE FUCK YOU WANT\
 TO PUBLIC LICENSE TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND\
MODIFICATION\x1b[0m\n\n0. You just \x1b[1mDO WHAT THE FUCK YOU WANT TO\x1b[0m.\n"


#define 	HELP			"\n\tRTFM\n\nhelp yourself ;)\n"
#define   NAME      "SHELL=Mysh V0.1"
#define		HOME			environ[parse_env(environ, "HOME")]
#define   PATH      environ[parse_env(environ, "PATH")]
#define		TPATH			"PATH=/bin:/usr/bin"
#define   PWD 			"PWD="
#define   OLDPWD		"OLDPWD="
char			*buffer;
#define   PROMPT		my_strcat(getcwd(buffer, BUFFERSIZE), "> ")

void		errors(char *errmsg);
void		help(char *helpmsg, char *buff);
void		license(char *licencemsg, char *buff);

#endif
