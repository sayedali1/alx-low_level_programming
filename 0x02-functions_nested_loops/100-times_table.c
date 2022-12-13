#include "main.h"
#include <stdio.h>

/**
*print_times_table - prints 9 times table
*@n: sit point
*Return: void
*/
void print_times_table(int n)
{
	int i;
	int j;
	int result = 0;

	if (n > 15 || n < 0)
	{
		return (0);
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
			{
				printf("%d", result);
			}
			else if (result <= 9)
			{
				printf("%d,   ", result);
			}
			else if (result > 99)
			{
				printf("%d,  ", result);
			}
			else if (result > 999)
			{
				printf("%d, ", result);
			}
			if (j == 9)
			{
				continue;
			}
		}
		printf("\n");
	}
}
