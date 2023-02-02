#include "main.h"
/**
 * binary_len- fun thet cal now many digit is needed to call the bi num
 * @n: the num we want to calc
 * Return: the len
 */
int binary_len(unsigned long int n)
{
	int len = 0;

	while (n > 0)
	{
		len++;
		n >>= 1;
	}
	len--;
	return (len);
}

/**
 * print_binary - fun that convert decimal to binary
 * @n:num we want to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int digit = 1;

	if (binary_len(n) > 0)/* shift the 1 to the left */
		digit <<= binary_len(n);

	while (digit > 0)
	{
		if (n & digit)/* bitwise the mostsign bit */
			_putchar('1');
		else
			_putchar('0');

		digit >>= 1;
	}
}
