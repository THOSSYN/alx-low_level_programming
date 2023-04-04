#include<stdio.h>

/**
 *_memset - set n bytes of memory to some value.
 *@s: is the pointer we are returning.
 *@b: The character we want to set memory to.
 *@n: size of byte we want to set to.
 *Return: pointer to address s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;

		for (j = 0; j < n; j++)
		{
		return (s);
		}
	}
	return (0);
}
