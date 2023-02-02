#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the num we want to change
 * @index: the index tha we want to change
 * Return: 1 if success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	/* check if index not more the the max bit size */
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	mask <<= index;/* move the 1 to the index we want */
	*n &= ~mask;/* change the ones and zeros then AND it with n*/

	return (1);
}
