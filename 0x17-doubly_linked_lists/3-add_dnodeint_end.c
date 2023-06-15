#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a list
 *@head: is the pointer to the beginning of the list
 *@n: is the element to be added
 *Return: the address of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tmp;

	if (head == NULL)
		return (NULL);

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
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		newNode->prev = tmp;
		tmp->next = newNode;
	}
	return (newNode);
}
