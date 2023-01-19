#include <stdio.h>
#include <stdarg.h>
/**
*sum_them_all - fun that sum all the arg tha passes to it
*@n: num of arguments that gonna pass to the fun
*Return: sum of the args, 0 otherwise
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		/* printf("%d\n", i); */
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
