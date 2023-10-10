#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - A function that searches for a value
 * in a sorted array using jump_search algorithm
 * @array: is the pointer to the list
 * @size: is the length of the array
 * @value: the searched value
 * Return: -1 if array is NULL or value not present
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start, end, i;

	if (!array || !value)
		return (-1);

	start = 0;
	end = sqrt(size);

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end = end + sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
