#include <unistd.h>
#include <term.h>
#include <curses.h>
#include "lib.h"

int	id_tput(char* str, int x, int y, int fd)
{
	char*	cursor;
	char*	tmp;

	cursor = tgetstr("cm", 0);
	if (cursor == NULL)
		return (-1);
	tmp = tgoto(cursor, x, y);
	if (tmp == NULL)
		return (-1);
	id_printstr(tmp, fd);
	id_printstr(str, fd);
	return (0);
}
