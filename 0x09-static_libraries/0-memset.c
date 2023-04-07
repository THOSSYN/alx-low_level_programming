#include <stdio.h>

/**
 *_memset - set some byte of an array to something.
 *@s: is the array being set to something.
 *@b: the particular character we are setting to.
 *@n: the number of bytes we want to set.
 *Return: return the character pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
