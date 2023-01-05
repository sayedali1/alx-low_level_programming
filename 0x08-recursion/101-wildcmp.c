#include "main.h"

/**
*check_astrc - cmp str when have astrc.
*@s1: frist str
*@s2: sec str
*@holder: pointer to hold the str to use when we want to
*check the char before 
*Return: 1 if same, 0 otherwise
*/

int check_astrc(char *s1, char *s2, char *holder)
{
	if (*s1 == '\0' && *s2 == '\0')	/*str1 and str2 the same*/
	{
		return (1);
	}

	if (*s1 == '\0' && *s2 == '*')	/*when the end of s1 and s2 current has astrc*/
	{
		return (check_astrc(s1, s2 + 1, s2 + 1));
	}

	if (*s1 == '\0' && *s2 != '\0')	/*when the end of s1 and not s2*/
	{
		return (0);
	}

	if (*s2 == '*')	/*when s2 current char is astrc*/
	{
		return (check_astrc(s1, s2 + 1, s2 + 1));
	}

	if (*s1 == *s2)	/*when s1 the same of s2*/
	{
		/*go to the next char and the holder is the same*/
		return (check_astrc(s1 + 1, s2 + 1, holder));
	}
	else
	{
		/*when not we go to the next char of s1 and s2 = the holder*/
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
	if (*s1 == '\0' && *s2 == '\0')	/*when s1 and s2 empty*/
	{
		return (1);
	}
	else if (*s1 == *s2)	/*when str2 dont have astrc*/
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')	/*when we have astrc we use check_astrc*/
	{
		return (check_astrc(s1, s2 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
