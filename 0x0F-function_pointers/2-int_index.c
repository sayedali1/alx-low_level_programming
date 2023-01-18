#include <stdio.h>
#include "function_pointers.h"
/**
*int_index - function that searches for an integer
*@array: pointer to the first elem in the array
*@size: size of the array
*@cmp: pointer to fun
*Return: the index of the first element, -1 otherwise
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}
	return (-1);
}
