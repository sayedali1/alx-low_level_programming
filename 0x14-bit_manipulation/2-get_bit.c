#include "main.h"
/**
 * binary_len- fun thet cal now many digit is needed to call the bi num
 * @n: the num we want to calc
 * Return: the len
 */
unsigned int binary_len(unsigned long int n)
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
 * get_bit -  returns the value of a bit at a given index
 * @n: the num we want to get the bit for
 * @index: the index of the bit we want
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (!(index < binary_len(n)))
		return (-1);

	mask <<= index;/* shift to the left to the given index */

	if (n & mask)
		return (1);
	else
		return (0);
}
