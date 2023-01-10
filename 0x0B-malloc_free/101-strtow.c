#include "main.h"
#include <stdlib.h>
/* #include <stdio.h> */
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
/**
*strtow - fun that splite str into array of strings
*@str: str we want to splite
*Return: pointer to array of strings, NULL otherwise
*/
char **strtow(char *str)
{
	int len, word = 0, i, j, k, flag;
	char **strs;

	if (str == NULL || *str == '\0'|| _strlen(str) == 1)
	{
		/* printf("we in first null \n"); */
		return (NULL);
	}
	/* get num of words in the str */
	word = check_word(str) ;
	
	/* create memory size of words */
	strs = malloc(sizeof(char *) * word);

	if (strs == NULL)
	{
		/* printf("we in sec null\n"); */
		free(strs);
		return (NULL);
	}
	
	/* get the len of each word in the str */
	i = 0, len = 0, j = 0,flag = 0, k = 0;
	while (i <= _strlen(str))
	{
		if ((str[i] != ' ' && str[i] != '\0'))
		{
			len++;
			flag = 1;
		}
		else if ((str[i] == ' ' || str[i] == '\0' || i == (_strlen(str) - 1)) && flag == 1)
		{
			
			/* printf("%d %d\n", len, i); */
			strs[j] = malloc(sizeof(char) * (len + 1));

			if (strs[k] == NULL)
			{
				/* printf("we in thrid NULL\n"); */
				for (k = 0;  k < word; k++)
				{
					free(strs[k]);
				}
				free(strs);
				return(NULL);
			}
			j++;
			k++;
			len = 0;
			flag = 0;
		}
		i++;
	}

	/* walk though str and copy each word in strs */
	k = 0, i = 0,flag = 0;
	for (j = 0; j <= _strlen(str); j++)
	{
		
		if (str[j] != ' ' && str[j] != '\0')
		{ 
			flag = 1;
			strs[i][k] = str[j];
			k++;
		}
		else if ((str[j] == ' ' || str[j] == '\0' || j == _strlen(str) - 1) && flag == 1)
		{	
			strs[i][k] = '\0';
			i++;
			k = 0;
			flag = 0;
		}

	}
	/* printf ("%d %d\n", i, k); */
	strs[i][k] = '\0';
	
	return (strs);
}
