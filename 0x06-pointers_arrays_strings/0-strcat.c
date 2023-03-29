#include<stdio.h>

/**
 *_strcat - concatenate two strings.
 *@dest: the string to be joined to.
 *@src: where the joining string is taken from.
 *Return: a character pointer.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((dest[i++] = src[j++]) != '\0')
	{
		;
	}
	return (dest);
}
