#include <stdio.h>
#include "search_algos.h"

/**
 * print - A function that displays the output of an array
 * @array: is the list of element
 * @size: is the length of the list
 * @delim: is a 0 or 1 value to set flag
 * Return: nothing
 */

void print(int *array, size_t size, int delim)
{
	size_t i = 0;

	if (size > 0)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
		{
			if (delim)
			{
				printf(", %d", array[i]);
			}
			else
			{
				printf("%d", array[i]);
				delim = 1;
			}
		}
		printf("\n");
	}
}

/**
 * binary_search - A function that searches for a value in a
 * sorted array
 * @array: is the list of element
 * @size: is the length of the list
 * @value: value to be searched
 * Return: -1 if array is NULL or value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, start, end, root, delim;
	size_t currentSize;

	if (!value || array == NULL)
		return (-1);

	start = 0;
	end = size - 1;
	delim = 0;
	print(array, size, delim);
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		root = array[mid];

		if (value == root)
			return (mid);

		if (value < root)
			end = mid - 1;
		else
			start = mid + 1;

		currentSize = (value < root) ? (mid - start + 1) : (end - mid + 1);
		print(array + start, currentSize - 1, delim);
		delim = 0;
	}
	return (-1);
}
