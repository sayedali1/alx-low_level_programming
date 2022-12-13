#include "main.h"
/**
*print_sign - check the sign og a number
*
*@n int num 
*
*Return 1 if postive, 0 if zero, -1 if negative
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
