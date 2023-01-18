#include <stdio.h>
#include "function_pointers.h"
/**
*array_iterator - fun that executes a function given as a parameter on each element of an array
*@array: pointer to the first elem in the array
*@size: size of the array
*@action: pointer to fun
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if ((int)size < 0 || action == NULL)
	{
		return;
	}

	for (i = 0 ; i < (int)size; i++)
	{
		action(*(array + i));
	}
}
