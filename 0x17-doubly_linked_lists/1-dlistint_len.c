#include "lists.h"

/**
 *dlistint_len - return the number of elements in list
 *@h: is the pointer to the beginning of the list
 *Return: the number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
