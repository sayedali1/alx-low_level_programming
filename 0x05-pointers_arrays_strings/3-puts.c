#include "main.h"
/**
*_puts - print string to stdout
*@str: the start of the str
*Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchat(*str);
		str++;
	}
}

