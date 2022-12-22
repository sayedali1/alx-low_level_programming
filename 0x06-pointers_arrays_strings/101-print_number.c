#include "main.h"



/**
*print_number - print an integer
*@n: number to be printed
*Return: void
*/
void print_number(int n)
{
	unsigned int i, d, pos = n;
	double j = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			pos = n * -1;
			_putchar('-');
		}
		while (j <= pos)
		{
			j *= 10;
		}
		i = j / 10;
		while (i >= 1)
		{
			d = pos / i;
			_putchar(d + '0');
			pos = (pos - (i * d));
			i /= 10;
		}
	}
}

