#include "main.h"

/**
*swap_int - swap two int
*@a: first int
*@b: sec int
*Return: void
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

