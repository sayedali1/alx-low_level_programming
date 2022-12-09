#include <stdio.h>
/**
*main - Entry point
*Return: always 0
*/
int main(void)
{
	int num1 = 48;
	int num2 = 49;
	int comma = 44;
	int space = 32;
	int newLine = 10;

	while (num1 <= 57)
	{
		while (num2 <= 57)
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
			}

			num2++;
		}
		if (num1 < 58)
		{
		putchar(comma);
		putchar(space);
		}
		num1++;
	}
	putchart(newLine);
	return (0);
}
