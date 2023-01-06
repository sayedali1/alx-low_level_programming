#include <stdio.h>
/**
*main - pring the prog name
*@argc: count of the argc elements
*@argv: pointer to arg str
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
