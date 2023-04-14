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
	void *nu_ptr;
	char *nu_arr_ptr;
	char *old_arr_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	nu_ptr = malloc(new_size);
	if (nu_ptr == NULL)
	{
		return (NULL);
	}
	nu_arr_ptr = (char *)nu_ptr;
	old_arr_ptr = (char *)ptr;
	for (i = 0; i < old_size; i++)
	{
		nu_arr_ptr[i] = old_arr_ptr[i];
	}
	free(ptr);
	return (nu_ptr);
}
