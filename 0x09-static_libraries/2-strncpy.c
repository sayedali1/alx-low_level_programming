#include "main.h"

/**
*_strncpy - cpy string to another
*@dest: first str
*@src:sec str
*@n: num for char to be copied
*Return: first str
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

