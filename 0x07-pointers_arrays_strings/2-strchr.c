#include<stdio.h>

/**
 *_strchr - locates a character in a string
 *@s: character pointer containing the search string.
 *@c: character being searched for.
 *
 *Return: character pointer.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
	return (0);
}
