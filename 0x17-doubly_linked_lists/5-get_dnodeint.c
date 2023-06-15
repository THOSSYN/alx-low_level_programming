#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of list
 *@head: is the pointer to first node
 *@index: is the position's element to get
 *Return: NULL if the node doesn@t exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	/*tmp = tmp->next;*/
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
