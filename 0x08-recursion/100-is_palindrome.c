#include "main.h"
/**
*_strlen_recursion - fun return len of str
*@s: pointer to the str
*Return: the len of the str
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	else
	{
		i = _strlen_recursion(s + 1);
		return (i = i + 1);
	}
}

/**
*check_pali - fun to check palindrome
*@s: pointer to str
*@len: len of the str
*@i: num to walk throw str
*Return: 1 if pali, 0 otherwise
*/
int check_pali(char *s, int len, int i)
{
	/*split the str */
	if (i < len / 2)
	{
		/*check the first char when the list char and so on*/
		if (*(s + i) == *(s + (len - i - 1)))
		{
			/*go to the next char using recursion*/
			return (check_pali(s, len, i + 1));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (1);
	}
}

/**
*is_palindrome - fun that check if str is palindrome or not
*@s: ponter to the str we need to check
*Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	/*get the len of the str*/
	int len_pali = _strlen_recursion(s);

	if (*s == '\0')	/*when sr is empty*/
	{
		return (1);
	}
	else
	{
		return (check_pali(s, len_pali, 0));
	}
}
