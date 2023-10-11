#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - a function that searches for a value in a
 * sorted skip list of integers.
 * @list: pointer to the beginning of list
 * @value: searched value
 * Return: NULL if list is not present or head is NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list, *express = NULL;

	if (list == NULL || !value)
		return (NULL);

	express = current->express;

	while (express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		if (express->n >= value)
			break;
		current = express;
		if (current != NULL)
			express = express->express;
		else
			express = NULL;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		current->index, express ? express->index : 0);

	while (current != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		else if (current->next == NULL || current->n > value)
			return (NULL);
		current = current->next;
	}
	return (NULL);
}
