#include "main.h"
/*
*main - print the alphabet in ascending order
*Return: always zero
**/
void print_alphabet(void)
{
	int alpha = "a";

	while (alpha <= "z")
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
