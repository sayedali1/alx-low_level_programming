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
	int i, overflow;
	long num1_head, num1_tail, num2_head, num2_tail, sum_head, sum_tail;

	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 93; i++)
	{
		sum = num1 + num2;
		printf(", %lu", sum);
		num1 = num2;
		num2 = sum;
	}

	num1_head = num1 / 1000000000;
	num1_tail = num1 % 1000000000;
	num2_head = num2 / 1000000000;
	num2_tail = num2 % 1000000000;

	for (; i < 99; i++)
	{
		overflow = (num1_tail + num2_tail) / 1000000000;
		sum_tail = (num1_tail + num2_tail) - (1000000000 * overflow);
		sum_head = (num1_head + num2_head) + overflow;

		printf(", %lu%lu", sum_head, sum_tail);

		a_head = b_head;
		a_tail = b_tail;
		b_head = sum_head;
		b_tail = sum_tail;
	}
	printf("\n");
	return (0);
}
