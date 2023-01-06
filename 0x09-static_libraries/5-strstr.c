#include "main.h"
/**
*_strstr -  function that locates a substring.
*@haystack: This is the main C string to be scanned.
*@needle: This is the small string to be searched with-in
*haystack string.
*Return: Returns a pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, x = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	i = 0;
	while (*(haystack + i) != '\0')
	{
		j = 0;
		x = i;
		while (*(needle + j) != '\0')
		{
			if (*(haystack + x) == *(needle + j))
			{
				x++;
				j++;
			}
			else
			{
				break;
			}
		}

		if (*(needle + j) == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (0);
}
