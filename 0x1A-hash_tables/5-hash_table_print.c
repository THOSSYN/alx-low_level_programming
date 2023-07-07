#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: is pointer to hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int printdelim;

	if (ht == NULL)
		return;

	printf("{");
	printdelim = 0;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (printdelim)
				printf(", ");
			printf("'%s' : '%s'", current->key, current->value);
			printdelim = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
