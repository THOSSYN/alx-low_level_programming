#include "lists.h"

/**
 *free_dlistint - frees a list
 *@head: is the pointer to the beginning of the list
 *Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(tmp);
	}
	free(head);
}
