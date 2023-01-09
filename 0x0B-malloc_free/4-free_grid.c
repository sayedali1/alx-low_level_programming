#include "main.h"
#include <stdlib.h>
/**
*free_grid - fun to free 2d memory alloc
*@grid: is a 2d array we to free 
*@height: is the num of colms
*Rerurn: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
