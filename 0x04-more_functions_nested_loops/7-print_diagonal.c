#include "main.h"
/**
*print_diagonal - draws a diagonal line
*@n: num of the diagonal lines
*Return: void
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n')
	}
}
