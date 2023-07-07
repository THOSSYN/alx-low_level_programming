#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the pointer to the hash table
 * @key: is the key to be added in the table
 * @value: is the derived value for the key
 * Return: 1 on success or 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *collid;
	unsigned long int index;

	collid = malloc(sizeof(hash_node_t));
	if (!collid)
		return (0);
	collid->key = strdup(key);
	collid->value = strdup(value);

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		ht->array[index] = collid;
	else
	{
		collid->next = ht->array[index];
		ht->array[index] = collid;
	}
	return (1);
}
