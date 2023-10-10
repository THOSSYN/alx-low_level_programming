#include <stdio.h>
#include "search_algos.h"

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
	int mid, start, end, root, i;

	if (!value || array == NULL)
		return (-1);

	start = 0;
	end = size - 1;
	printf("Array: ");
        for (i = start; i <= end; i++)
		printf("%d ", array[i]);
        printf("\n");
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

		printf("Array: ");
        	for (i = start; i <= end; i++)
            		printf("%d ", array[i]);
        	printf("\n");
	}

	return (-1);
}
