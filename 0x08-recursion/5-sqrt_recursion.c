#include "main.h"
/**
*srt_root - walk the i to get the root of n
*@n: num we need to calc the sqrt for
*@i: the root
*Return: -1 if greater than n , sqrt_root less than
*i otherwise
*/
int srt_root(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i < n)
	{
		return (srt_root(n, i + 1));
	}
	else
	{
		return (i);
	}
}
/**
*_sqrt_recursion - calc the root of n
*@n: num we calc the root for
*Return: -1 if less than 0, root otherwise
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (srt_root(n, 0));
	}
}
