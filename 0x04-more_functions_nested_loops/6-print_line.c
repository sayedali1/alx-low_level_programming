#include "main.h"
/**
*print_line - print n of underscores
*@n: num of _
*return: void
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
