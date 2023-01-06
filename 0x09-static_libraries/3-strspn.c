#include "main.h"
/**
*_strspn -  function that gets the length of a prefix substring
*@s: string we look into
*@accept: the string containing the list of characters to match
*Return: he number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int likly = 0; /*numeber of matched charcters*/

	i = 0;
	while (*(s + i) != '\0')
	{

		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				likly++;
				break;
			}
			if (*(accept + j + 1) == '\0' && *(s + i) != *(accept + j))
				return (likly);
			j++;
		}
		i++;
	}
	return (likly);
}
