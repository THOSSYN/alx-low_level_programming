#include <stdio.h>

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
 * binary_search_recurse - A function that searches for a value in a
 * sorted array
 * @array: is the list of element
 * @value: value to be searched
 * @start: is the begining of the list
 * @end: is the highest index of the list
 * Return: -1 if array is NULL or value is not present
 */

int binary_search_recurse(int *array, int value, size_t start, size_t end)
{
	int mid, root, delim;
	size_t currentSize;

	if (!value || array == NULL)
		return (-1);

	delim = 0;
	print(array + start, end - start + 1, delim);
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

/**
 * exponential_search - A function that searches for a value in an array
 * using exponetial_search algorithm
 * @array: is pointer to the first element of the list
 * @size: is the length of the array
 * @value: is the value to be searched for
 * Return: -1 if array is NULL or value is not present
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left, right;

	if (!array || size == 0)
	{
		return (-1);
	}

	if (array[0] == value)
	{
		return (0);
	}

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i *= 2;
	}

	left = i / 2;
	right = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	return (binary_search_recurse(array, value, left, right));
}
