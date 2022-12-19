#include "main.h"
/**
*print_rev - print str in reverse
*@s: the addres of the start of the str
*Return:void
*/

void print_rev(char *s)
{
	char *p = *s;

	while (*s != '\n')
	{
		p--;
		_putchar(*p);
		s++;
	}
	_putchar('\n');
}

