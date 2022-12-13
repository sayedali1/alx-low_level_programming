#include "main.h"
/**
*_isalpha - entry point check if c  alpha or not
*
*@c: integar
*
*Return:   1 if alphabet, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
