#include <stdio.h>
/**
*main - prints the largest prime factor of the number
*Return: always 0
*/

int main(void)
{
	unsigned long  i;
	unsigned long  n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i = 2;
		}
	}

	printf("%lu\n", n);
	return (0);
}
