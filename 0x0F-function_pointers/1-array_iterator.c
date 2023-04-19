#include "function_pointers.h"

/**
 *array_iterator - executes a func given as param
 *@array: is the holder of the element
 *@size: is the size of the array
 *@action: is the function pointer being executed
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
