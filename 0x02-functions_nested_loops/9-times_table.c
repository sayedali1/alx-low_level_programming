#include "main.h"
/**
*times_table - prints 9 times table
*Return: void
*/

void times_table(void)
{
	int i;
	int j;
	int result = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			
			if (result <= 9)
			{
				_putchar('0' + result);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (result > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			if (j == 9)
			{
				continue;
			}
		}
		_putchar('\n');
	}
}
