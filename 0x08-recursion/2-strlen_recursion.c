#include "main.h"
/**
*_strlen_recursion - fun return len of str
*@s: pointer to the str
*Return: the len of the str
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	else
	{
		i = _strlen_recursion(s + 1);
		return (i = i + 1);
	}
}

