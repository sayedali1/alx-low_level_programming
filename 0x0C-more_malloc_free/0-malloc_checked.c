#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - fun that alloc memory of a given num
*@b: num of memory we want to alloc
*Return: void
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *memory;

	memory = (unsigned int *)malloc(sizeof(unsigned int) * b);

	if (memory == NULL)
	{
		free(memory);
		exit(98);
	}
	return(memory);
}
