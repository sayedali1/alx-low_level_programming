#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdarg.h>
/**
*struct type - struct for arg type
*@sym: sympol of the type
*@Type: type name
*/
typedef struct type
{
	char sym;
	void (*Type)(va_list);
} arg_t;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);


#endif
