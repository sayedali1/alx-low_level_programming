#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first num
 * @m: sec num
 * Return: num of changes
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n > 0 || m > 0)
	{
		/* check if each num get the same result */
		if ((n & 1) != (m & 1))
			count++;
		/* move the numbers one bit */
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
