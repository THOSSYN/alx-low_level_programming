#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning of list
 *@head: is the pointer to the beginning of the list
 *@n: is the element to be added
 *Return: the address of the new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tmp;

	tmp = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		newNode->next = tmp;
		*head = newNode;
		tmp->prev = newNode;
	}
	return (*head);
}
