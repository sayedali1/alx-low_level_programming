#include "main.h"

/**
*check_astrc - cmp str when have astrc.
*@s1: frist str
*@s2: sec str
*@holder: pointer to hold the str before
*Return: 1 if same, 0 otherwise
*/
int check_astrc(char *s1, char *s2, char *holder)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == '\0' && *s2 == '*')
	{
		return (check_astrc(s1, s2 + 1, s2 + 1));
	}

	if (*s1 == '\0' && *s2 != '\0')
	{
		return (0);
	}

	if (*s2 == '*')
	{
		return (check_astrc(s1, s2 + 1, s2 + 1));
	}

	if (*s1 == *s2)
	{
		return (check_astrc(s1 + 1, s2 + 1, holder));
	}
	else
	{
		return (check_astrc(s1 + 1, holder, holder));
	}
}

/**
*wildcmp - cmp two strings
*@s1: pointer to the first str
*@s2: pointer to the sec str
*Return: 1 if the two strings is the same ,0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (check_astrc(s1, s2 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
