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
	int i, j, count;

	i = j = 0;
	count = 0;

	while (dest[i] != '\0')
	{
		i++;
		count++;
	}
	for (j = 0; src[j] && j < n; j++)
	{
		dest[count + j] = src[j];
	}
	return (dest);
}
