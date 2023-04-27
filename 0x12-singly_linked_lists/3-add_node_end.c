#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 *add_node_end - adds a new node at the end of a list_t
 *@head: is the node head
 *@str: is the string node
 *Return: the address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *last = *head;
	end_node = malloc(sizeof(list_t));

	if (!end_node)
	{
		return (NULL);
	}
	end_node->str = strdup(str);
	end_node->len = strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = end_node;
	return (end_node);
}
