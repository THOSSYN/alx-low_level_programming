#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given index
 *@h: is the pointer to pointer to the start of list
 *@idx: is the position to insert new data
 *@n: is the data to insert at position
 *Return: the address of the new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *newNode, *prev;
	unsigned int i = 0;

	tmp = *h;
	if (h == NULL)
		return (NULL);
	if (*h == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	while (i < idx && tmp != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	if (i < idx || tmp == NULL)
		return (NULL);
	newNode->next = tmp;
	tmp->prev = newNode;
	newNode->prev = prev;
	prev->next = newNode;
	return (newNode);
}
