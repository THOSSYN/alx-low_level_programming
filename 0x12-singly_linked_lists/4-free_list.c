#include "lists.h"
#include <stdlib.h>

/**
 *free_list - frees a list_t list
 *@head: is the head node
 *
 *Return: nothing
 */

void free_list(list_t *head)
{
	free(head);
}
