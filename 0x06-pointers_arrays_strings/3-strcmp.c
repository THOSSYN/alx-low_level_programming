#include<stdio.h>

/**
 *_strcmp - compares two strings
 *@s1: string to compare with.
 *@s2: comparing string.
 *Return: 0, positive or negative number.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			return (-15);
		}
		else if (s1[i] > s2[i])
		{
			return (15);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
