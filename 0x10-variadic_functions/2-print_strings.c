#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_strings - fun tha print strings
*@separator: separate between strings
*@n: num of strings that
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;
	char *str;

	if(n > 0)
	{
		va_start(pa, n);
		for (i = 0; i < n; i++)
		{
			str = (char *)va_arg(pa, int);
			if (str != '\0' || str != NULL)
				printf("%s", str);
			else
				printf("(nil)");

			if (separator != NULL && i != (n - 1))
				printf("%s", separator);
		}

		va_end(pa);
	}
	printf("\n");
}
