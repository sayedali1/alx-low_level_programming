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

int check_word(char *str)
{
	int i = 0, flag = 0, word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && flag == 0)
		{
			flag = 1;
			word++;
		}
		else if (str[i] == ' ')
		{
			flag = 0;
			
		}
		i++;
	}
	return (word);
}
/**
*strtow - fun that splite str into array of strings
*@str: str we want to splite
*Return: pointer to array of strings, NULL otherwise
*/
char **strtow(char *str)
{
	int len, word = 0, i, j, k;
	char **strs;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	/* get num of words in the str */
	word = check_word(str);
	/* create memory size of words */
	strs = malloc(sizeof(char *) * word);

	if (strs == NULL)
	{
		free(strs);
		return (NULL);
	}
	
	/* get the len of each word in the str */
	i = 0, len = 0, j = 0;
	while (i <= _strlen(str))
	{
		
		if (str[i] != ' ')
		{
			len++;
		}

		if (str[i] == ' ')
		{
	
			
			strs[j] = (char *)malloc(sizeof(char) * (len + 1));
			len = 0;
			j++;
		}
		else if (str[i] == '\0')
		{


			strs[j] = (char *)malloc(sizeof(char) * (len));
			len = 0;
			j++;
		}

		if (strs[j] == NULL)
		{
			for (i = 0; i < word; i++)
			{
				free(strs[j]);
			}
			free(strs);
			return(NULL);
		}
		i++;
	}

	/* walk though str and copy each word in strs */
	k = 0, i = 0;
	for (j = 0; j <= _strlen(str); j++)
	{
		if (str[j] != ' ')
		{
			strs[i][k] = str[j];
			k++;
		}
		else if (str[j] == ' ' || str[j] == '\0')
		{	
			strs[i][k] = '\0';
			i++;
			k = 0;
		}
	}

	return (strs);
}
