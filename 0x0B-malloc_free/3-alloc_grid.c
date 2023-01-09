#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - create two dimentional array
*@width: the first dimention
*@height: the sec dimention
*Return: pointer to the first element of the array
* 0 otherwise
*/
int **alloc_grid(int width, int height)
{
	int **array_2d;
    int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array_2d = malloc(sizeof(int *) * height);/* allocate memory to rows */
	if (array_2d == NULL)
	{
		free(array_2d);
		return (NULL);
		
	}

	for (i = 0; i < height; i++)
	{
		array_2d[i] = malloc(sizeof(int ) * width);

		if (array_2d[i] == NULL)
		{
			for (i = 0; i < width; i++)
			{
				free(array_2d[i]);
			}
			free(array_2d);
			return (NULL);
		}		
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array_2d[i][j] = 0;
		}
	}
	return (array_2d);
}
