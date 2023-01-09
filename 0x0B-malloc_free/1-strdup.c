#include "main.h"
#include <stdlib.h>

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
*_strcpy - copy the sec str in the first one
*@dest: the copied str
*@src: the str we want to copy
*Return: char the address of dest
*/

char *_strcpy(char *dest, char *src)
{
	int i, len = _strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
*_strdup - fun that cp a str into another
*@str: pointer to str we want to duplicate
*Return: pointer to the copied array
*/

char *_strdup(char *str)
{
	int len;
	char *cpstr;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	/* create array of str size of str */
	cpstr = (char *)malloc((sizeof(char) * len) + 1);

	if (cpstr == NULL)
	{
		return (NULL);
	}

	/* copy the sec str into cpstr */
	_strcpy(cpstr, str);
	return (cpstr);
}
