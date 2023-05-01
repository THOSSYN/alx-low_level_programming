#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given pos
 *@head: is the pointer to the listint_t list
 *@idx: is the index position for insertion
 *@n: is the data member of the list
 *Return: the pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new;
	unsigned int i = 0;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (!tmp)
	{
		free(new);
		return (NULL);
	}
	if (tmp == new || *head == NULL)
		return (NULL);
	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
