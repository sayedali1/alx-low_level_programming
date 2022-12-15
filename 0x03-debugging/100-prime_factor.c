#include <stdio.h>

/**
*main - get prints the largest prime factor of the number
*Return: always 0
*/

int main(void)
{
	long i, prime;
	long n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			prime = i;
			n = n / i;
			i = 2;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
