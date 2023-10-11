#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - a function that searches for a values in a sorted
 * using the jump search algorithm
 * @list: is pointer to the head of the list
 * @size: is the length of the list
 * @value: is the searched element
 * Return: NULL if head is NULL or value is not present in head
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp = list, *start = NULL;
	size_t end, i;

	if (list == NULL || !value)
		return (NULL);

	end = sqrt(size);

	while (tmp->next != NULL && tmp->next->n < value)
	{
		start = tmp;
		for (i = 0; tmp->next != NULL && i < end; i++)
			tmp = tmp->next;
		end = end + sqrt(size);
	}

	if (tmp->n >= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
	}

	while (start != NULL && start->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);
		start = start->next;
	}

	return (start);
}
