#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - searches a string.
 *@s: string containing search.
 *@accept: string contains character searched for.
 *Return: a pointer to character.
 */

char *_strpbrk(char *s, char *accept)
{
	char *Isgotit;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		Isgotit = accept;
		while (*Isgotit != '\0')
		{
			if (*s == *Isgotit)
			{
				return (s);
			}
			Isgotit++;
		}
		s++;
	}
	return (0);
}
