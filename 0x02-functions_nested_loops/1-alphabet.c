#include "main.h"

/**
*print_alphabet - entry point
*print the alphabet in ascending order
*Return: always 0
*/
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
