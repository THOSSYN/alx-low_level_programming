#include "lists.h"

/**
 *reverse_listint - reverses a listint_t linked list
 *
 *@head: is the pointer to the struct node
 *Return: pointer to the first node of the rev list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rare = NULL;
	listint_t *update = NULL;

	while (*head != NULL)
	{
		update = (*head)->next;
		(*head)->next = rare;
		rare = *head;
		*head = update;
	}
	*head = rare;
	return (*head);
}
