#include "main.h"
/**
*print_triangle -  prints a triangle
*@size: size of the triangle
*Return: void
*/
void print_triangle(int size)
{
	int i, j, k; /*i for row, j for spaces, k for #*/

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
