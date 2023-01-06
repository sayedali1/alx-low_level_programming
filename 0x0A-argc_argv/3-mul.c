#include <stdio.h>
#include <stdlib.h>
/**
*main - mul two nums
*@argc: count of the argc elements
*@argv: pointer to arg str
*Return: 1 if error ,0 otherwise
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc > 1 && argc < 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
