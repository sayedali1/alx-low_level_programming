#include "main.h"
/**
* _strlen - returns the length of a string
*
* @s: string
*
*Return: length
*
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

/**
*rev_string -  function that reverses a string.
*@s: the first address of the str
*Return: void
*/
void rev_string(char *s)
{
	char temp;
	int i = 0, j;

	j = _strlen(s) - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
		i++;
	}
}

