#include <stdio.h>
/**
*main - entry point
*Return: always 0
*/

int main(void)
{
	int alpha = 97;

	while (alpha < 123)
	{
		putchar(alpha);
		alpha++;
	}
	putchar("\n");
	return (0);
}
