#include "main.h"

/**
*puts2 - print char
*@str: address og the str
*Return: void
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}

}

