#include "main.h"
/**
*more_numbers - print 1 to 14 for 10 times
*Return: void
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 14)
			{
				_putchar('0' + j / 10);
			}
			if (j > 9 && j <= 14)
			{
				_putchar('0' + j % 10);
			}
		}

		_putchar('\n');
	}
}
