#include "lists.h"

/**
 *pop_listint - deletes the head node of listint_t list
 *@head: is the pointer to head node
 *Return: returns 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *store;

	if (*head == NULL)
		return (0);

	tmp = *head;
	store = tmp;
	*head = tmp->next;
	free(tmp);
	return (store->n);
}
