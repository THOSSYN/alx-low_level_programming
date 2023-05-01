#include "lists.h"

/**
 *free_listint2 - frees a listint_t list
 *@head: is the head node pointer
 *Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *del;
	listint_t *hold;

	del = *head;
	while (del != NULL)
	{
		hold = del->next;
		free(del);
		del = hold;
	}
	*head = NULL;
}
