#include <stdio.h>
/**
*main - fibonacci serise
*Return: print sum of even num in the fib
*/
int main(void)
{
	long num1 = 1;
	long num2 = 2;
	long sum = 0;
	int i;
	long even_sum = 2;

	for (i = 0; i < 4000000; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;

		if (sum % 2 == 0)
		{
			even_sum += sum;
		}
		if (even_sum >= 4000000)
			break;
	}
	printf("%ld", even_sum);
	printf("\n");
	return (0);
}
