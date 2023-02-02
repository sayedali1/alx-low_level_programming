#include "main.h"
/**
 * print_binary - fun that convert decimal to binary
 * @n:num we want to convert
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long int  decimal = 1024, num = 0;

	if (n < 0)
		return;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* walk through 1024 */
	for (i = 0; i < 11; i++)
	{
		/* check if num plus the decimal less than the num */
		if (n >= (num + decimal))
		{
			_putchar('1');/* print 1 */
			num += decimal; /* add decimal to num */
			decimal >>= 1; /* devide the decimal by 2 */
			flag = 1; /* use it to dont print 0 on the left */
		}
		else if (n < (num + decimal))
		{
			if (flag == 1)
				_putchar('0'); /* print 0 only if 1 printed before it */
			decimal >>= 1; /* devide decimal by 2 */
		}
	}
}
