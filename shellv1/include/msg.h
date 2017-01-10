/*
** msg.h for BOOK in /home/bender/Desktop/Snippets/book/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Dec 22 09:10:38 2016 John Doe
** Last update	Fri Dec 23 12:38:37 2016 John Doe
*/

#ifndef MSG_H_
# define MSG_H_

#include "book.h"
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

#define INTRO			"\e[1;33mPShell V0.0.1\e[0m  (beta, Jan  1 2017, 42:42:42)\n \
[CLANG 3.6.2-3 20420101] on x_86_64-pc-linux-gnu\nType \"q\" to quit, \"h\" for help, \
\"c\" for copyright, \"cr\"  for credits or \"l\" for licencing rights\n"
#define PROMPT		"\e[1;33mPShell>>\e[0m "
#define HELP			"\n\t\e[1mRTFM\e[0m \n\nhelp yourself ;)\n"
#define NAME			"PShell V0.0.1"

#define ERRSIZE		100
#define CMDSIZE		10000
#define READSIZE	5000

#endif
