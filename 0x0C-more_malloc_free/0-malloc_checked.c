#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 *malloc_checked - allocates memory
 *@b: value of
 *
 *Return: void pointer.
 */

void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
