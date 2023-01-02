

/**
*_strchr -  function that locates a character in a string.
*@s: str that we search in
*@c: char we looking for
*Return: pointer to the first occurrence ,NULL in ther is no match
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == c)
		return (s);
	else
		return (0);
}
