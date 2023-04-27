#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 *add_node - adds a new node at the start of list_t list
 *head: is the head node pointer
 *@str: is the str node
 *Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *makenode;
	makenode =  malloc(sizeof(list_t));

	if (!makenode)
	{
		printf("NULL");
	}
	makenode->str = strdup(str);
	makenode->len = strlen(str);
	makenode->next = (*head);
	(*head) = makenode;
	return (makenode);
}
