#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - output the resulting array
 * @array: pointer to beginning of list
 * @start: is first index of array
 * @end: is highest index of array
 * Return: nothing
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: %d", array[start]);
	for (i = start + 1; i <= end; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
}

/**
 * advanced_binary_recursive - is an helper function that perform recursion
 * on the original array
 * @array: is the pointer to first element of array
 * @start: is the first index each subarray
 * @end: is the highest index
 * @value: is the searched element
 * Return: a list of subarrays using recursive call
 */

int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	int mid;

	if (start > end)
		return (-1);

	mid = (start + end) / 2;

	if (array[mid] == value)
	{
		print_array(array, start, end);
		if ((size_t)mid > start && array[mid] == value)
		{
			return (advanced_binary_recursive(array, start, mid, value));
		}
		return (mid);
	}

	if (array[mid] < value)
	{
		print_array(array, mid, end);
		return (advanced_binary_recursive(array, mid + 1, end, value));
	}
	else
	{
		print_array(array, start, mid);
		return (advanced_binary_recursive(array, start, mid - 1, value));
	}
}

/**
 * advanced_binary - a function that searches for a value in a sorted array
 * @array: pointer to the first element in the array
 * @size: is the length of the list/array
 * @value: is the searched element
 * Return: -1 if the array is NULL or value is not present
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
