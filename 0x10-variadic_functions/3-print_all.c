#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char (va_list pa)
{
	printf("%c", va_arg(pa, int));
}

void print_float (va_list pa)
{
	printf("%f", va_arg(pa, double));
}

void print_int(va_list pa)
{
	printf("%d", va_arg(pa, int));
}

void print_str(va_list pa)
{
	char *str;
	str = va_arg(pa, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

void print_all(const char * const format, ...)
{
	arg_t type[] ={
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};
	va_list pa;
	int i, j;
	char *sp = "";

	va_start(pa, format);
	i = 0;
	while(format != NULL && format[i] != '\0')
	{
		j = 0;
		while (type[j].sym != '\0')
		{
			if (type[j].sym == format[i])
			{
				printf("%s", sp);
				type[j].Type(pa);
				sp = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(pa);
	printf("\n");
}
