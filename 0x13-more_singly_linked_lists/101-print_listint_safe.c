#include "lists.h"

/**
 *print_listint_safe - prints a listint_t list
 *@head: is the pointer to the structure listint_t list
 *
 *Return: the number of node.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *play, *ffwd;
	size_t count = 0;

	if (head == NULL)
		exit (98);
	play = head;
	ffwd = head;

	while (play != NULL && ffwd != NULL && ffwd->next != NULL)
	{
		printf("[%p] %d\n", (void *)play, play->n);
		count++;
		play = play->next;
		ffwd = ffwd->next->next;
		if (play == ffwd)
		{
				printf("-> [%p] %d\n",(void *)play, play->n);
				play = play->next;
				count++;
				ffwd = ffwd->next;
				break;
		}
	}
	return (count);
}
