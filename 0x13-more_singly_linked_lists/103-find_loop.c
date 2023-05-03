#include "lists.h"

/**
 *find_listint_loop - fimds the loop in a linked list
 *
 *@head: is the pointer to the listint_t list
 *Return: address of starting of loop on if loop present
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *play = head;
	listint_t *ffwd = head;
	listint_t *find_loop = head;

	if (head == NULL)
		return (0);
	while (play != NULL && ffwd != NULL && ffwd->next != NULL)
	{
		play = play->next;
		ffwd = ffwd->next->next;
		if (play == ffwd)
		{
			while (play != find_loop)
			{
				play = play->next;
				find_loop = find_loop->next;
			}
			return (find_loop);
		}
	}
	return (NULL);
}
