#include "main.h"
/**
*_putd_recursion - fun that print a str
*@s: pointer to a string that we want to print
*Retutn: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}