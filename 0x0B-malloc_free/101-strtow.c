#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
*_strncpy - cpy string to another
*@dest: first str
*@src:sec str
*@n: num for char to be copied
*Return: first str
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
*check_word - fun that get num on words in the str
*@str: pointer to the first element in str
*Return: num of words
*/

int check_word(char *str)
{
	int i = 0, word = 0, flag = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] != ' ' && str[i] != '\0') && flag == 0)
		{
			word++;
			flag = 1;
		}
		else if (str[i] == ' ' || i == _strlen(str) - 1)
		{
			flag = 0;
		}
	}
	return (word);
}

/**
*get_len - get the len of each word in the str
*@str: pointer to the first element in str
*@i: pointer to hold the number of the index
*Return: len of the word, 0 otherwise
*/
int get_len(char *str, int *i)
{
	int len = 0, flag = 0;

	while (*i <= _strlen(str))
	{
		if ((str[*i] != ' ' && str[*i] != '\0'))
		{
			len++;
			flag = 1;
		}
		else if ((str[*i] == ' ' || str[*i] == '\0' ||
		 *i == (_strlen(str) - 1)) && flag == 1)
		{
			/* printf("%d %d\n", len, i); */
			return (len);
			flag = 0;
		}
		*i += 1;
	}
	return (0);
}

/**
*strtow - fun that splite str into array of strings
*@str: str we want to splite
*Return: pointer to array of strings, NULL otherwise
*/
char **strtow(char *str)
{
	int len = 0, word = 0, i, j;
	char **strs;
	int *p;
	/* check is the str is empty */
	for (i = 0; i < _strlen(str); i++)
		if (str[i] != ' ')
			j++;
	if (str == NULL || *str == '\0' || j == 0)
		return (NULL);

	word = check_word(str);/* get num of words in the str */
	strs = malloc(sizeof(char *) * (word + 1));/* create memory size of words */

	if (strs == NULL)
	{
		free(strs);
		return (NULL);
	}
	j = 0;
	for (i = 0; i < word ; i++)
	{
		p = &j;/* pointer to counter j to hold the index */
		len = get_len(str, p);/* get the len of each word */

		/* create memory size of len */
		strs[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (strs[i] == NULL)
		{
			for (i = 0;  i <= word ; i++)
				free(strs[i]);
			free(strs);
			return (NULL);
		}
		/* cpy each word in strs */
		strs[i] = _strncpy(strs[i], &str[*p - len], len);
	}
	strs[i] = '\0';
	return (strs);
}
