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

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

int check_word(char *str)
{
	int i = 0, word = 0, flag = 0;
	while (i <= _strlen(str))
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
		i++;
	}
	return (word);
}

	/* get the len of each word in the str */
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
		else if ((str[*i] == ' ' || str[*i] == '\0' || *i == (_strlen(str) - 1)) && flag == 1)
		{
			/* printf("%d %d\n", len, i); */
			return (len);
			flag = 0;
		}
		*i += 1 ;
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

	if (str == NULL || *str == '\0'|| _strlen(str) <= 1)
	{
		/* printf("we in first null \n"); */
		return (NULL);
	}
	/* get num of words in the str */
	word = check_word(str);
	/* create memory size of words */
	strs = malloc(sizeof(char *) * (word + 1));
	
	if (strs == NULL)
	{
		/* printf("we in sec null\n"); */
		for (i = 0; i < word; i++)
		{
			free(strs[i]);
			return (NULL);
		}
	}
	
	j = 0;
	for (i = 0; i < word ; i++)
	{
		p = &j;

		len = get_len(str, p) ;
		/* printf("%d ", len);	 */	
		strs[i] = (char *)malloc(sizeof(char) * (len + 1));

		if (strs[i] == NULL)
		{
			/* printf("we in thrid NULL\n");  */
			for (i = 0;  i < word ; i++)
			{
				free(strs[i]);
			}
			free(strs);
			return(NULL);
		}
		strs[i]= _strncpy(strs[i], &str[*p - len] , len +1);
	}
	return (strs);
}
