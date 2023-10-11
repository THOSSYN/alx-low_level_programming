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

	/*while (tmp != NULL && tmp->n < value)
	{
		start = tmp;
		for (i = 0; tmp->next != NULL && i < end; i++)
			tmp = tmp->next;
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
		tmp = tmp->next;
		end = end + sqrt(size);
	}
	while (tmp != NULL && tmp->n < value)
	{
		start = tmp;
		for (i = 0; tmp->next != NULL && i < end; i++)
			tmp = tmp->next;

		if (tmp != NULL)
		{
			printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
			tmp = tmp->next;
			end = end + sqrt(size);
		}
	}
	if (start != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
		while (start != NULL && start->n < value)
		{
			printf("Value checked at index [%ld] = [%d]\n", start->index, start->n);
			start = start->next;
		}
		return (start);
	}*/
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

/*listint_t *jump_list(listint_t *list, size_t size, int value)
{
    listint_t *current, *prev;
    size_t step, i;

    if (list == NULL)
        return (NULL);

    step = sqrt(size);
    current = list;
    prev = NULL;

    while (current != NULL && current->n < value)
    {
        prev = current;
        for (i = 0; current->next != NULL && i < step; i++)
            current = current->next;
	current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    if (prev != NULL)
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    while (prev != NULL && prev->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        prev = prev->next;
    }

    if (prev == NULL || prev->n > value)
        return (NULL);

    printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

    if (prev->n == value)
        return (prev);

    return (NULL);
}*/
