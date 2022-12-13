#include "main.h"
/**
*_abs - get the absolute value
*@a: absolute int
*
*Return: absolute value
*/
int _abs(int a)
{
	if (a == 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
	{
		return (a);
	}
}
