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
*argstostr - fun that concat all the argments in one str and split
* with new line
*@ac: numbers of argments
*@av: argments that we want to splite
*Return: pointer to the created str, 0 otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		/* get the len of arguments plus one for the new line */
		len += (_strlen(av[i]) + 1);
	}
	len += 1;/* for the null terminal */

	/* alloc memory of len size */
	str = (char *)malloc(sizeof(char) * len);
	/* check it */
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	/* walk through av */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			/* copy av into str and use k to walk through the str */
			str[k++] = *(*(av + i) + j);
		}
		str[k++] = '\n';
	}

	return (str);
}
