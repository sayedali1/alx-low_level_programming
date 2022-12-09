#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - entry point
*Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);

	if (n % 10 > 5)
	{
		printf("is %d and is greater than 5\n", n % 10);
	}
	else if (n % 10 < 6)
	{
		printf("is %d and is less than 6 and not 0\n", n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("is %d and is 0\n", n % 10);
	}
	return (0);
}
