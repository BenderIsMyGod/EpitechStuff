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
#include <string.h>
#include <limits.h>

#define LICENSE		"\t\t\t\t\t\e[1mMIT License\e[0m\n\t\t\t\tCopyright 2017 John Doe TEk1\n\n \
Permission is hereby granted, free of charge, to any person obtaining a copy \
of this software and associated documentation files (the \"Software\"), to deal \
in the Software without restriction, including without limitation the rights  \
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell  \
copies of the Software, and to permit persons to whom the Software is  \
furnished to do so, subject to the following conditions:\n\n \
The above copyright notice and this permission notice shall be included in all  \
copies or substantial portions of the Software. \
THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR \
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, \
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE  \
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER \
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, \
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE \
SOFTWARE.\n"

#define  	PROMPT		"PShell >> "
#define	 	INTRO		"\t\t>>PShell<<\n\t'u' for usage, 'h' for help, \n\t'l' for license and 'q' to quit\n"
#define 	HELP			"\n\tRTFM\n\nhelp yourself ;)\n"
#define 	NAME			"PShell V0.0.1"

#define 	ERRSIZE		1000
#define 	CMDSIZE		10000
#define 	READSIZE	5000

void		errors(int errnum);
void		help(char *helpmsg, char *buff);
void		license(char *licencemsg, char *buff);
void		shortcuts(char *buff);

#endif
