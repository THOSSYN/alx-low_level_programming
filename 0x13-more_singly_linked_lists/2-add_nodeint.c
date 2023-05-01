#include "lists.h"

/**
 *add_nodeint - adds new node at the start of listint_t
 *@head: is the pointer to the node head
 *@n: is the new value of elements
 *Return: the address of the new element on success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *one_node;
	one_node = malloc(sizeof(listint_t));

	if (!one_node)
	{
		free (one_node);
		return (NULL);
	}
	one_node->n = n;
	one_node->next = (*head);
	(*head) = one_node;
	return (one_node);
}
