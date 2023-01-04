#include "main.h"
/**
*factorial -  function that returns the factorial of a given number.
*@n: int num that we need to calc the factorial for
*Return: 1 if 0, -1 if less than 0, int otherwise
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
