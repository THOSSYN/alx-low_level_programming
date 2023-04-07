#include<stdio.h>

/**
 *_strncpy - "copies a string."
 *@dest: receiving string.
 *@src: sender of string.
 *@n: the integer argument expected.
 *Return: dest a pointer to char.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest == NULL || src == NULL || n == 0)
	{
	return (dest);
	}

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
