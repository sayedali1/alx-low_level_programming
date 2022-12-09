#include <stdio.h>
/**
*main - Entry point
*Return: always 0
*/
int main(void)
{
	int num1 = 48;
	int num2 = 48;
	int comma = 44;
	int space = 32;
	int newLine = 10;

	while (num1 <= 57)
	{
		while (num2 <= 57)
		{
			if (num1 < num2 && num2 < 57)
			{
				putchar(num1);
				putchar(num2);
				putchar(comma);
				putchar(space);
			}
			num2++;
		}
		num2 = 48;
		num1++;
	}
	putchar(newLine);
	return (0);
}
