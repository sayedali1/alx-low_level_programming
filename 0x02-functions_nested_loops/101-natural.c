#include <stdio.h>
#include "main.h"
/**
*main -  sum of all the multiples of 3 or 5
*Return: print the sum
*/
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
