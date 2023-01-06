#include "main.h"
/**
*_isdigit - check if c is digit
*@c: int that we check
*Return: 1 if digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
