#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - program that performs simple operations
*@ac: num of arguments
*@av: array of arguments
*Return: 0
*/

int main(int ac, char **av)
{
	int (*get_fun)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(av[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((av[2][0] == '/' || av[2][0] == '%') && av[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	get_fun = get_op_func(av[2]);
	printf("%d\n", get_fun(atoi(av[1]), atoi(av[3])));

	return (0);
}
