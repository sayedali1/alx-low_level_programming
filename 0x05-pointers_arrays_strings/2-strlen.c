#include "main.h"
/**
* _strlen - get the len of the string
* @s: the string
* Return: the len
*/
int _strlen(char *s)
{
	int lenth = 0, i = 0;

	while (s[i] != '/0')
	{
		lenth++;
		i++;
	}

	return (lenth);
}

