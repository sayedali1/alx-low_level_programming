#include "main.h"

/**
*cap_string - capitalizes all words of a string.
*@cap: str that we need to cap
*Return: str
*/
char *cap_string(char *cap)
{
	char separator[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; cap[i] != '\0'; i++)
	{
		for (j = 0; separator[j] != '\0'; j++)
		{
			if (cap[i] == separator[j] && cap[i + 1] <= 'z' && cap[i + 1] >= 'a')
			{
				cap[i + 1] -= 32;
			}
		}
	}

	return (cap);
}

