#include<stdio.h>

/**
 *wildcmp - compares two strings
 *@s1: is the first string
 *@s2: is the second string being compared
 *Return: 1 or 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return wildcmp(s1 + 1, s2 + 1);
	}
	else
	return (*s1 - *s2);
}
