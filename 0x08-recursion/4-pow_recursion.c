#include "main.h"
/**
*_pow_recursion - function that returns the value of x raised to the power of y.
*@x: int we want to cal the pow for
*@y: the power of x
*Return: 1 if 0, -1 if less than 1, pow otherwise
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
