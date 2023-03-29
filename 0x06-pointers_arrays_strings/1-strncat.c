#include<stdio.h>

/**
 *_strncat - it yet concatenate two strings.
 *@dest: string to be added to.
 *@src: string joining to dest.
 *@n: expected argument integer
 *Return: character pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((dest[i++] = src[j++]) != '\0')
	{
		return (dest);
	}
}
