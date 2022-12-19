#include "main.h"
/**
*rev_string -  function that reverses a string.
*@s: the first address of the str
*Return void
*/
void rev_string(char *s)
{
	char temp;
	int i = 0, j;
	int len;

	while(*s != '\0')
	{
		len++;
		s++;
	}
	j = len;
	while(i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
		i++;	

	}
}

