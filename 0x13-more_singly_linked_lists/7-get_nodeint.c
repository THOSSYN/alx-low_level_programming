#include "lists.h"

/**
 *get_nodeint_at_index - get the nth node of listint_t list
 *@head: is the pointer to the struct node
 *@index: is the nth node being searched
 *Return: pointer to the next element in the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	listint_t *next;
	unsigned int i = 0;

	tmp = head;
	while (i < index - 1)
	{
		tmp = tmp->next;
		i++;
	}
	next = tmp->next;
	if (next == NULL)
	{
		return (NULL);
	}
	return (next);
}
