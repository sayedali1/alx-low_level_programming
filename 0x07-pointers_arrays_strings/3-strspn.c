/**
*_strspn -  function that gets the length of a prefix substring
*@s: string we look into
*@accept: the string containing the list of characters to match
*Return: he number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != ',')
	{
		while (*accept != '\0' && *s != *accept)
		{
			accept++;
		}

		i++;
		s++;        
	}

	return (i);    
}
