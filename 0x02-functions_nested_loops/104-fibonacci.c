#include <stdio.h>
/**
*main - fibonacci serise
*Return: print the fib
*/
int main(void)
{
	long num1 = 1;
	long num2 = 2;
	long sum = 0;
	int i;

	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 96; i++)
	{
		sum = num1 + num2;
		printf(", %ld", sum);
		num1 = num2;
		num2 = sum;
	}
	printf("\n");
	return (0);
}
