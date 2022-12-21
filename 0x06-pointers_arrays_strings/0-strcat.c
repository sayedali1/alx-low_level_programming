#include "main.h"
#include <stdio.h>
/**
 * _strlen - get the len of the string
 * @s: the string
 * Return: the len
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
 *_strcat - concat to str
 *@dest: first str
 *@src: sec str
 *Return: dest + src
 */
char *_strcat(char *dest, char *src)
{
	int i, len = _strlen(dest);

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[len + i] = src[i];
        
    }

    dest[len + i] = '\0';

	return (dest);
}

