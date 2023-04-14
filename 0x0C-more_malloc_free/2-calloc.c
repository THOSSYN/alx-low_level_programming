#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - allocates memory for an array.
 *@nmemb: is an array
 *@size: is the size of the array.
 *Return: pointer to the new allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
