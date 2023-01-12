#include "main.h"
#include <stdlib.h>
/**
*_calloc - fun that allocate memory and fill it with zeros
*@nmemb: num of elements we want to create
*@size: num of bytes
*Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	memory = malloc(size * nmemb);

	if (memory == NULL)
	{
		free(memory);
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)memory + i) = 0;
	}

	return (memory);
}
