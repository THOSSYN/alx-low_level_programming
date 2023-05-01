#include "lists.h"

/**
 *sum_listint - sums all the data of a listint_t list
 *@head: is the pointer to the head node
 *Return: the sum of elements
 */

int sum_listint(listint_t *head)
{
	int plus = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		plus += head->n;
		head = head->next;
	}
	return (plus);
}
