#include "lists.h"

/**
 *free_listint - frees a listint_t list
 *@head: is the pointer to listint_t struct node
 *
 *Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *del;
	listint_t *hold;

	del = head;

	while (del != NULL)
	{
		hold = del->next;
		free(del);
		del = hold;
	}
}
