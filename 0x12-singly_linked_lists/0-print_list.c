#include "lists.h"
#include<stdio.h>
#include<stddef.h>
/**
 *print_list - prints all elements of a list_t list
 *
 *@h: is the head node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);
			printf("\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
