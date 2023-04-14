#include "main.h"
#include <stdlib.h>

/**
 *array_range - create an array of integers.
 *@min: it is the min value of the array.
 *@max: it is the max value.
 *Return: pointer to the new allocated memory
 */
int *array_range(int min, int max)
{
	int *arr_ptr;
	int i;
	int range = max - min + 1;

	if (min > max || range <= 0)
	{
		return (NULL);
	}
	arr_ptr = malloc(sizeof(int) * range);
	if (!arr_ptr)
	{
		return (NULL);
	}
	for (i = min; i < range; i++)
	{
		arr_ptr[i] = min + i;
	}
	return (arr_ptr);
}
