/**
*_strstr -  function that locates a substring.
*@haystack: This is the main C string to be scanned.
*@needle: This is the small string to be searched with-in
*haystack string.
*Return: Returns a pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (*(haystack + i) != '\0')
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i) == *(needle + j))
			{
				i++;
			}
			else
			{
				break;
			}
			if (*(haystack + i + 1) == '\0' && *(haystack + i) != *(needle + j))
				return (needle);
		}
		i++;
	}
	return (0);
}
