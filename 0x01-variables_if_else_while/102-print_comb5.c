#include <stdio.h>
/**
*main - Entry point
*Return: always 0
*/
int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;
	int comma = 44;
	int space = 32;
	int newLine = 10;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = 48; num3 <= 57; num3++)
			{
				for (num4 = 49; num4 <= 57; num4++)
				{
					putchar(num1);
					putchar(num2);
					putchar(space);
					putchar(num3);
					putchar(num4);

					if (!((num1 == 57 && num2 == 56) && (num3 == 57 && num4 == 57)))
					{
						putchar(comma);
						putchar(space);
					}
				}
				num4 = 49;
			}
		}
	}
	putchar(newLine);
	return (0);
}
