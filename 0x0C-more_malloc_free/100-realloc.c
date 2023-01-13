#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_realloc - fun that do the same as realloc fun
*@ptr: pointer the the existing memory
*@old_size: size of the old memory
*@new_size: size of the new memory we want
*Return: pointer to the new allocated memory, NULL otherwise
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr;
	unsigned int i;

	/* check for new size */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/**
	*alloc memoey of the new size if ptr point to nothing
	* and return the new memoey empty
	*/
	if (ptr == NULL)
	{
		newPtr = malloc(new_size);

		if (newPtr == NULL)
			return (NULL);
		else
			return (newPtr);
	}

	if (old_size == new_size)
		return (ptr);
	/* check the size to alloc memory  */
	newPtr = malloc(new_size);

	if (newPtr == NULL)
		return (NULL);
	/* copy the elements of ptr with the lesser size */
	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			newPtr[i] = *((char *)ptr + i);

	else if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			newPtr[i] = *((char *)ptr + i);
	free(ptr);
	return (newPtr);
}
