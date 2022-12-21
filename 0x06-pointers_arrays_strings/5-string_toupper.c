#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @low: the str we need to change
 * Return: low
 */
char *string_toupper(char *low)
{
	int i;

	for (i = 0; low[i] != '\0'; i++)
	{
		if (low[i] <= 'z' && low[i] >= 'a')
			low[i] -= 32;
	}

	return (low);
}

