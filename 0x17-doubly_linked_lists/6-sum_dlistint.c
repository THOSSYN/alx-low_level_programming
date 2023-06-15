#include "lists.h"

/**
 *sum_dlistint - returns the sum of all data in a list
 *@head: is the pointer to the beginning of the list
 *Return: sum of all elements in a list or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return (0);
	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
