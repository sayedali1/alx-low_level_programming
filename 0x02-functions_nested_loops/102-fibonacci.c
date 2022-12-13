#include <stdio.h>
/**
*main - fibonacci serise
*Return: print the fib
*/
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int sum = 0;
	int i;

	printf("%d, %d", num1, num2);
	for (i = 0; i < 49; i++)
	{
		sum = num1 + num2;
		printf(" ,%d", sum);
		num1 = num2;
		num2 = sum;
	}
	printf("\n");
	return (0);
}
