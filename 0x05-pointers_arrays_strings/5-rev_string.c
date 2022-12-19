#include "main.h"
/**
*rev_string -  function that reverses a string.
*@s: the first address of the str
*Return void
*/
void rev_string(char *s)
{
	int len = 0;
	char temp;
	int i, j = 0;

	while(*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	for (i = len; i > 0 ;i--)
	{
		temp = s[j];
		s[j] = s[len];
		s[len] = temp;
		j++;	

	}
}

