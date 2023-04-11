#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *and initializes it with a specific char.
 *@size: the size of the array.
 *@c: the character we are initializing to
 *Return: pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr_to_array;

	ptr_to_array = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		ptr_to_array[i] = c;
	}
	return (ptr_to_array);
}
