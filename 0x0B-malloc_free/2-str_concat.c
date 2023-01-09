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

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *str;	/* str we concat strings in */

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	/* get the lenth of s1 and s2 */
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	/* create array size of s1 and s2 */
	str = malloc((sizeof(char) * (len1 + len2)) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	
	_strcpy(str, s1);/* cpy s1 into str */
	_strcpy(&str[len1], s2);/* cpy s2 into str after s1 */
	str[len1 + len2 + 1] = '\0';/* add null at the end of str */
	return (str);
}
