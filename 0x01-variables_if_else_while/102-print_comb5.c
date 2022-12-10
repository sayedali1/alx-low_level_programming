#include <stdio.h>
/**
*main - Entry point
*Return: always 0
*/
int main(void)
{
	int num_1;
	int num_2;
	int comma = 44;
	int space = 32;
	int newLine = 10;

	for (num_1 = 0; num_1 <= 98; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 <= 99; num_2++)
		{
			putchar((num_1 / 10) + '0');
			putchar((num_1 % 10) + '0');
			putchar(space);
			putchar((num_2 / 10) + '0');
			putchar((num_2 % 10) + '0');
			if (num_1 == 98 && num_2 == 99)
				continue;

			putchar(comma);
			putchar(space);
		}
	}
	putchar(newLine);
	return (0);
}
