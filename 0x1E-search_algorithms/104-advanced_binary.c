#include <stdio.h>
#include "search_algos.h"

/**
 * print - prints an array to stdout
 * @array: pointer to first element of a list array
 * @size: is the length of the array
 * @delim: is a flag that determines where comma should be placed in array
 * Return: nothing
 */

void print(int *array, size_t size, int delim)
{
	size_t i = 0;

	if (size == 1)
		printf("Searching in array: %d\n", array[i]);

	if (size > 1)
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
 * binary_search_recursive - A function that searches for a value in a
 * sorted array
 * @array: is the list of element
 * @value: value to be searched
 * @start: is the begining of the list
 * @end: is the highest index of the list
 * Return: -1 if array is NULL or value is not present
 */

int binary_search_recursive(int *array, int value, size_t start, size_t end)
{
	size_t mid = start + (end - start) / 2;
	int root = array[mid];

	if (start > end)
	{
		print(array + start, 0, 0);
		return (-1);
	}

	print(array + start, end - start + 1, (start != end) ? 0 : 1);

	if (value == root)
	{
		if (mid > start && array[mid - 1] == value)
		{
			return (binary_search_recursive(array, value, start, mid));
		}
		return (mid);
	}
	else if (value < root)
	{
		return (binary_search_recursive(array, value, start, mid - 1));
	}
	else
	{
		return (binary_search_recursive(array, value, mid + 1, end));
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
	size_t start, end;

	if (!array || size == 0)
		return (-1);

	start = 0;
	end = size - 1;
	return (binary_search_recursive(array, value, start, end));
}
