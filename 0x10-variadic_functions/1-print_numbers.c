#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_numbers - fun that prints numbers that passes to it
*@separator: separte between the nums
*@n: num of argurments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	/*check that num of arguments  */
	if (n == 0)
		return;

	va_start(pa, n);/* start get the args */
	for (i = 0; i < n; i++)
	{
		/* print each arg */
		printf("%d", va_arg(pa, int));
		/* check sep not null and dont prnt sep for the last arg */
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(pa);
	printf("\n");
}
