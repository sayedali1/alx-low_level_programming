#include "main.h"
#include <stdlib.h>
/**
*array_range - fun that gets array for nums between the rangs
*@min: min num
*@max: max num
*Return: pointer to the first element of the created array
*NULL otherwise
*/

int *array_range(int min, int max)
{
	int *nums;
	int i, j;

	if (min < 0 || max < 0 || (min == 0 && max == 0))
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	nums = malloc(sizeof(max) * max - min);

	if (nums == NULL)
	{
		return (NULL);
	}

	for (j = 0, i = min; i <= max; i++, j++)
	{
		nums[j] = i;

	}
	return (nums);
}
