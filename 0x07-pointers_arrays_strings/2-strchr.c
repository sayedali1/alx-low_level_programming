#inlcude "main.h"
#define NULL 0 
/**
*_strchr -  function that locates a character in a string.
*@s: str that we search in
*@c: char we looking for
*Return: pointer to the first occurrence ,NULL in ther is no match
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
