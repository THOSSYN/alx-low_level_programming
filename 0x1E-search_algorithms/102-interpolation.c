#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - A function that searches for a value
 * in an array using interpolation search
 * @array: is the list of elements
 * @size: is the length of the list
 * @value: is the searched value
 * Return: -1 if array is NULL or value not present
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l = 0, h = size - 1;

	if (!array || size == 0)
		return (-1);

	while (l <= h && array[l] <= value && array[h] >= value)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		if ((int)pos < 0 || pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
	}
	return (-1);
}
