#include <stdio.h>
/**
*main - prints the largest prime factor of the number
*Return: always 0
*/

int main(void)
{
	unsigned long  i, prime;
	unsigned long int n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			prime = i;
			n = n / i;
			i = 2;
		}
	}

	printf("%lu\n", prime);
	return (0);
}
