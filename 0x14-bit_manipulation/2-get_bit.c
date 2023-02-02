#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: the num we want to get the bit for
 * @index: the index of the bit we want
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	/* check if index not more the the max bit size */
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	mask <<= index;/* shift to the left to the given index */

	if (n & mask)
		return (1);
	else
		return (0);
}
