#include "main.h"
/**
* _strlen - get the len of the string
* @s: the string
* Return: the len
*/
int _strlen(char *s)
{
	int lenth = 0;

	while (*s != "/0")
	{
		lenth++;
		s++;
	}

	return (lenth);
}

