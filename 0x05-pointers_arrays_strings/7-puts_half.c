#include "main.h"
/**
*_strlen - get the len of the string
*@s: the string
*Return: the len
*/
int _strlen(char *s)
{
	int lenth = 0;

	while (*s != '\0')
	{
		lenth++;
		s++;
	}
	return (lenth);
}
/**
*puts_half - print the other half of the str
*@str: the address of the str
*Return: void
*/


void puts_half(char *str)
{
	int i, len = _strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2 ; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((len - 1) / 2) - 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

