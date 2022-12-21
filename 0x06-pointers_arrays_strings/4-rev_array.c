#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array we want to rev
 * @n: len of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b[1000];
	int i;

	if (n % 2 == 0)
	{
		for (i = 0; i <= n / 2; i++)
		{
			b[i] = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = b[i];
		}
	}
	else
	{
		for (i = 0; i <= (n - 1) / 2; i++)
		{
			b[i] = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = b[i];
		}
	}
}

