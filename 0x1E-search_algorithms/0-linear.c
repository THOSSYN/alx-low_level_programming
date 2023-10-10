#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * @array: is pointer to the beginning of a list
 * @size: is how big the array is
 * @value: is the element to be searched for
 * Return: -1 if list is NULL or value is absent
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL && value)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
