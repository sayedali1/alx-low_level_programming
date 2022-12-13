#include "main.h"

/**
*jack_bauer - print the hours
*Return: prints each min of the clock
*/
void jack_bauer(void)
{	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i <= 9)
			{
				_putchar('0');
				_putchar('0' + i);
			}
			else
			{
				_putchar('0' + i);
			}
			_putchar(':');

			if (j <= 9)
			{
				_putchar('0');
				_putchar('0' + j);
			}
			else
			{
				_putchar(j);
			}
			_putchar('\n');
		}
	}
}
