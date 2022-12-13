#include "main.h"
/**
*_islower - entry point check if c lower alpha or not
*
*@c: integar
*
*Return:  0 if not_lower, 1 if lower
*/
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
