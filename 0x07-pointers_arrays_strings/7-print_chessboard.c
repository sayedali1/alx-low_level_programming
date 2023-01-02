#include "main.h"
/**
*print_chessboard - function that prints the chessboard.
*@a: 2d array
*Return: void
*/
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j = 0;

	for (i = 0; i < sizeof(a[8]); i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar('\n');
	}
}

