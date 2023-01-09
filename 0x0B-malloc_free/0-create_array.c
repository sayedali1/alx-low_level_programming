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
	char *array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	return (array);
}
