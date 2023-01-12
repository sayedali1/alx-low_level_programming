#include "main.h"
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memory = malloc(size * nmemb);

	if (memory == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		memory[i] = 0;
	}

	return (memory);
}
