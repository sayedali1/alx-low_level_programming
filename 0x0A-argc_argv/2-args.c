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

	

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
