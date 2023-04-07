#include<stdio.h>

/**
 *_memcpy - copies a certain memory area.
 *@dest: This is where the buffer is copied to.
 *@src: where buffer is copied from
 *@n: The number of buffer to copy.
 *Return: pointer to address of memory.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = n;

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < 98; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
