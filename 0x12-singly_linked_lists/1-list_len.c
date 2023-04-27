#include "lists.h"

/**
 *list_len - checks the number of element in list_t list
 *@h: is the head node.
 *Return: the number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
