#include <stdio.h>
/**
*main - entry point
*Return: always 0
*/

int main(void)
{
	int hex = 0;
	int ahex = 97;

	while (hex <= 9)
	{
		putchar(hex);
		hex++;
	}
	while (ahex <= 102)
	{
		putchar(ahex);
		ahex++;
	}
	putchar(10);
	return (0);
}
