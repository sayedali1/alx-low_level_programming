#include <stdio.h>
/**
*main - fibonacci serise
*Return: print the fib
*/
int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int sum = 0;
	int i;

	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 96; i++)
	{
		sum = num1 + num2;
		printf(", %lu", sum);
		num1 = num2;
		num2 = sum;
	}
	printf("\n");
	return (0);
}
