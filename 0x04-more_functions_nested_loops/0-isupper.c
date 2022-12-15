#include "main.h"
/**
*_isupper - check for uppercase character
*@c: int that we check
*Return: 1 if upper , 0 otherwise
*/
int _isupper(int c)
{
	if (c <= 'A' || c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
