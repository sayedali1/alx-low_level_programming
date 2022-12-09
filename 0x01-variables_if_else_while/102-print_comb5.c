#include <stdio.h>
/**
*main - Entry point
*Return: always 0
*/
int main(void)
{
	int num1 = 48;
	int num2 = 48;
	int num3 = 48;
	int num4 = 49;
	int comma = 44;
	int space = 32;
	int newLine = 10;

	while (num1 <= 57)
	{
		while (num2 <= 57)
		{
			while (num3 <= 57)
			{
				while (num4 <= 57)
				{
					if (num1 <= num2)
					{
						putchar(num1);
						putchar(num2);
						putchar(space);
						putchar(num3);
						putchar(num4);
					}
					if (num1 <= num2 && num1 < 58 && num2 < 57)
					{
						putchar(comma);
						putchar(space);
					}
					num4++;
				}
				num4 = 48;
				num3++;
			}
			num3 = 48;
			num2++;
		}
		num2 = 48;
		num1++;
	}
	putchar(newLine);
	return (0);
}
