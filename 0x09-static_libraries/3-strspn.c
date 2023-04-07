#include<stdio.h>
#include<stdbool.h>

/**
 *_strspn - gets the length of a prefix substr.
 *@s: is the character pointer
 *@accept: comparing string.
 *Return: an integer.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool matchisFound = false;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				matchisFound = true;
				break;
			}
		}
		if (!matchisFound)
		{
			break;
		}
		else
		{
			len++;
		}
	}
	return (len);
	return (0);
}
