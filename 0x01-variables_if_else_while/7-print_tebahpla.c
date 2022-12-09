#include <stdio.h>
/**
*main - entry point
*Return: always 0
*/

int main(void)
{
	int alpha = 122;

	while (alpha >= 97)
	{
		putchar(alpha);
		alpha--;
	}

	putchar(10);

	return (0);
}
