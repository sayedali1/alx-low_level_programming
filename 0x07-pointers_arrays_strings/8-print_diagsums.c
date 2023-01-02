#include "main.h"
#include <stdio.h>
/**
*print_diagsums - function that prints the sum of the two diagonals
*of a square matrix of integers.
*@a: pointer to the 2d array
*@size: size of the array
*Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0, index;

	for (i = 0; i < size; i++)
	{
		index = (i * size) + i;
		sum1 += a[index];
	}

	for (i = 0; i <= size; i++)
	{
		index = (i * size) - i;
		sum2 += a[index];
	}
	printf("%d, %d\n", sum1, sum2);
}
