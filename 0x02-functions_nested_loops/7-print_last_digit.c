#include "main.h"
/**
*print_last_digit - get the last diger of num
*@last: integar number
*Return: the absolute of the last digit
*/
int print_last_digit(int last)
{
	last = last % 10;
	return (_abs(last));
}
