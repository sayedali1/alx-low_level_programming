#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string
* Return: length
*/



int _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/*
*puts2 - prints every other character of a string
*@str: the address of the first str
*Return: void
*/
void puts2(char *str)
{
	int i = 0;
	int len = _strlen(str);

	while (str[i] != '\0' && i < len)
	{
		_putchar(str[i]);
		i += 2;

	}
	_putchar('\n');
}

