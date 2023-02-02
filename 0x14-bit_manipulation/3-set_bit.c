#include "main.h"
/**
 * set_bit - fun that change the bit of given index to 1
 * @n: pointer to the num we want to change
 * @index: the index tha we want to change
 * Return: 1 if success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	/* check if index not more the the max bit size */
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	mask <<= index;/* move the 1 to the index we want */
	*n |= mask;/* if will change the bit to one */

	return (1);
}
