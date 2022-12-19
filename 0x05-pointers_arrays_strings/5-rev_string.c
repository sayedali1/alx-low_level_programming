#include "main.h"
/**
*rev_string -  function that reverses a string.
*@s: the first address of the str
*Return void
*/

void rev_string(char *s)
{
	int len = 0;
	int i;
	char *p;

	while(*s != '\0')
	{
		len++;
		s++;
	}

	s--;
	for (i = len; i > 0 ;i--)
	{
		p = s;
		p++;
		s--;
		_putchar(*p);
	}
	for (i = len; i > 0; i-- )
	{
		s = p;
		s++;
		p--;
	}
}

