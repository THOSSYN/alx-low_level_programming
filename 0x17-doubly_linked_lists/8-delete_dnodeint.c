#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index
 *of a list
 *@head: is the pointer to the start of list
 *@index: is the position to delete from
 *Return: 1 if success or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *next, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (i < index && tmp != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (-1);
	next = tmp->next;
	if (next != NULL)
		next->prev = prev;
	if (prev != NULL)
		prev->next = next;
	free(tmp);

	return (1);
}
