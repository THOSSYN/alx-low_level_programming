#include "main.h"
#include <stdlib.h>

/**
 *_realloc - reallocates a memory block
 *@ptr: is the pointer to the old memory block
 *@old_size: is the old memory size being allocated
 *@new_size: is the new size that is considered
 *Return: pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;

	if (new_size > old_size)
	{
		return (0);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}
	ptr = realloc(ptr, sizeof(int) * old_size, new_size);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	for (i = old_size; i < new_size, i++)
	{
		ptr[i] = i;
	}
	free(ptr);
}
