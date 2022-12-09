#include <stdio.h>
/**
*main - Entry point
*Return: always 0
*/

int main(void)
{
	int space = 32;
	int comma = 44;
	int number = 48;
	int newLine = 10;

	while (number <= 57)
	{
		putchar(number);
		number++;
		if (number < 58)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar(newLine);
	return (0);
}
