#include "main.h"
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
 *_strncar - cat n char
 *@dest: fri str
 *@src: sec str
 *@n:num of char to be concat
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, len = _strlen(dest);

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';

    return (dest);
}
