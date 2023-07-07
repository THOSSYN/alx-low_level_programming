#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: is the pointer to the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
