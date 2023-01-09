#include "main.h"
#include <stdlib.h>
/**
*create_array - fun that create a array of char
*@size: size of the array we want to create
*@c: char we want to store in the array
*Return: pointer to the array, NULL otherwise
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	/* create dynamic memory of size size */
	char *array = (char *)malloc(sizeof(char) * size);
	/* check if no error in memory alloc */
	if (array == NULL)
	{
		return (NULL);
	}
	/* check the size not empty */
	if (size == 0)
	{
		return (NULL);
	}
	/* wake through the array */
	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	return (array);
}
