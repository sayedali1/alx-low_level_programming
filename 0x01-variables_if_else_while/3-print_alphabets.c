#include <stdio.h>
/**
*main - entry point
*Return: always 0
*/

int main(void)
{
	int low_alpha = 97;
	int upper_alpha = 65;

	while (low_alpha < 123)
	{
		putchar(low_alpha);
		low_alpha++;
	}

	while (upper_alpha < 91)
	{
		putchar(upper_alpha);
		upper_alpha++;
	}
	putchar(10);
	return (0);
}
