#include "main.h"
/**
 * get_endianness - that checks the endianness
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (c)/* check the first adders */
		return (1);/* if the first addres = 1 */
	else
		return (0);/* if 0 */
}
