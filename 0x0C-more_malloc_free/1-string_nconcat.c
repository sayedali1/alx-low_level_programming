#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - get the len of the string
 * @s: the string
 * Return: the len
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
*_strncpy - cpy string to another
*@dest: first str
*@src:sec str
*@n: num for char to be copied
*Return: first str
*/

void _strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}
/**
*string_nconcat - fun that concatenates two strs with varibale
*ofthe size of the sec str
*@s1: pointer to the first str
*@s2: pointer to the sec str
*@n: size of str two we want to concat
*Return: pointer to the concat str, NULL otherwise
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcat;
	/* check if n greater or equal of s2 */
	if (n >= (unsigned int)_strlen(s2))
	{
		n = _strlen(s2); /* if n greater than s2 len let n = s len */
		strcat = malloc(sizeof(*strcat) * _strlen(s1) * n);

	}
	else
	{
		strcat = malloc(sizeof(*strcat) * _strlen(s1) * n);
	}

	if (strcat == NULL)
	{
		return (NULL);
	}

	/* cpy s1 into strcat */
	_strncpy(strcat, s1, _strlen(s1));
	/* cpy s2 after  s1 been copied*/
	_strncpy(&strcat[_strlen(s1)], s2, n);

	return (strcat);
}
