#include <stdio.h>
/**
*main - pring the prog name
*@argc: count of the argc elements
*@argv: pointer to arg str
*Return: 0
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
