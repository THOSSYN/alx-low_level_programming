#include "lists.h"
#include<stdlib.h>

/**
 *add_nodeint_end - adds new node at the end of listint_t
 *@head: pointer to the head node
 *@n: is the new element
 *Return: pointer to new element on success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ender;
	listint_t *last = (*head);

	ender = malloc(sizeof(listint_t));
	if (!ender)
	{
		free(ender);
		return (NULL);
	}
	ender->n = n;
	ender->next = NULL;
	if (*head == NULL)
	{
		*head = ender;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = ender;
	return (ender);
}
