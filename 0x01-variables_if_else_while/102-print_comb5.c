#include <stdio.h>
/**
*main - Entry point
*Return: always 0
*/
int main(void)
{
	int num_1;
	int num_2;
	int num_3;
	int num_4;
	int comma = 44;
	int space = 32;
	int newLine = 10;

	for (num_1 = 48; num_1 <= 57; num_1++)
	{
		for (num_2 = 48; num_2 <= 57; num_2++)
		{
			for (num_3 = 48; num_3 <= 57; num_3++)
			{
				for (num_4 = num_1 + 1; num_4 <= 57; num_4++)
				{
					putchar(num_1);
					putchar(num_2);
					putchar(space);
					putchar(num_3);
					putchar(num_4);

					if (!((num_1 == 57 && num_2 == 56) && (num_3 == 57 && num_4 == 57)))
					{
						putchar(comma);
						putchar(space);
					}
				}
				num_4 = 48;
			}
			num_3 = 48;
		}
		num_2 = 48;
	}
	putchar(newLine);
	return (0);
}
