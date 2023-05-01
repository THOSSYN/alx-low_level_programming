#include "lists.h"

/**
 *delete_nodeint_at_index -> deletes the node at an index.
 *@head: is the pointer to the head
 *@index: is the index of the element
 *Return: returns 1 on success or -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *p;
	unsigned int i = 0;

	tmp = *head;
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}
	p = tmp->next;
	tmp->next = p->next;
	free(p);
	if (p != NULL)
		return (-1);
	return (1);
}
