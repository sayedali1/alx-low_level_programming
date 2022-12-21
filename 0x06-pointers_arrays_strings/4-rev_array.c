#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array we want to rev
 * @n: len of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	if (n % 2 == 0)
	{
		for (i = 0; i < n / 2; i++)
		{
			temp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = temp;
		}
	}
	else
	{
		for (i = 0; i < (n - 1) / 2; i++)
		{
			temp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = temp;
		}
	}
}

