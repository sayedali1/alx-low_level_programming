#include <stdio.h>
#include <stdlib.h>
/**
*is_symbol - check if the str has sym or not
*@s: pointer to the str 
*Return: 1 if symbol, 0 otherwise
*/
int is_symbol (char *s)
{
	int i;
	/*loop throw the string*/
	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
			return (1);
		}
	}
	return (0);
}
/**
*main - add two nums
*@argc: count of the argc elements
*@argv: pointer to arg str
*Return: 1 if error ,0 otherwise
*/

int main(int argc, char *argv[])
{
	int add = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			/*bc argv is is arry of pointer we need to check every str in it */
			if (is_symbol(argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);
			}
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
