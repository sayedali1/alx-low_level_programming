#include "main.h"

/**
*print_array - print array in order
*@a: the start of the array
*@n: size of the array
*Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

