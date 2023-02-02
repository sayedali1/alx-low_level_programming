#include "main.h"

/**
*_pow_recursion - function that returns the
*value of x raised to the power of y.
*@x: int we want to cal the pow for
*@y: the power of x
*Return: 1 if 0, -1 if less than 1, pow otherwise
*/
int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow(x, y - 1));
}

/**
 * _strlen - get the len of the string
 * @s: the string
 * Return: the len
 */
int _strlen(const char *s)
{
	int lenth = 0;

	while (*s != '\0')
	{
		lenth++;
		s++;
	}

	return (lenth);
}

/**
 * binary_to_uint - fun that convert binary to decimal
 * @b: pointer to the str of binary number
 * Return: the decimal num, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	/* walk though the string form left to right */
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		/* get the decimal num from left to right */
		if (b[(_strlen(b) - 1) - i] == '1')
		{
			/* sum the result of the pow */
			sum += 1 * _pow(2, i);
		}
		else if (b[(_strlen(b) - 1) - i] == '0')
		{
			sum += 0 * _pow(2, i);
		}
		else
			return (0);
	}
	return (sum);
}
