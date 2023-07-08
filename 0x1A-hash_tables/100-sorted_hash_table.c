#include "hash_tables.h"

/**
 * shash_table_create - creates a table
 * @size: is the size of table to create
 * Return: pointer to created table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
	{
		return NULL;
	}

	ht->size = size;
	ht->shead = NULL;

	return ht;
}
/**
 * create_node - creates a node
 * @key: is the key
 * @value: is the value to be inserted
 * Return: nothing
 */

shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		return NULL;
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return new_node;
}

/**
 * insert_node - insert an element in the list
 * @ht: is the pointer to hash table
 * @new_node: is pointer to a new node
 * Return: nothing
 */

void insert_node(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current;

	if (ht->shead == NULL || strcmp(new_node->key, ht->shead->key) < 0)
	{
		new_node->next = ht->shead;
		ht->shead = new_node;
	}
	else
	{
        	current = ht->shead;

        	while (current->next != NULL && strcmp(new_node->key, current->next->key) >= 0)
		{
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}
}

/**
 * shash_table_set - set the hash table
 * @ht: pointer to the table
 * @key: is the key
 * @value: is the value the key return
 * Return: 0 or 1
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return 0;
	}
	
	new_node = create_node(key, value);

	if (new_node == NULL)
	{
		return 0;
	}

	insert_node(ht, new_node);
	return (1);
}

/**
 * shash_table_get - retrieve elementfrom table
 * @ht: is pointer to table
 * @key: is the key to get
 * Return: value for a key or NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return NULL;
	}

	current = ht->shead;

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return current->value;
		}
		current = current->next;
	}
	return NULL;
}

/**
 * shash_table_print - print hash table list
 * @ht: pointer to hash table
 * Return: nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->next != NULL)
		{
			printf(", ");
		}
		current = current->next;
	}
	printf("}\n");
}
/**
 * shash_table_delete - delete a hash table
 * @ht: pointer to table
 * Return: nothing
 */

void shash_table_delete(shash_table_t *ht)
{
        shash_node_t *next, *current;

        if (ht == NULL)
                return;
        current = ht->shead;

        while (current != NULL)
        {
                next = current->next;
                free(current->key);
                free(current->value);
                free(current);
                current = next;
        }
        free(ht);
}
/**
 * shash_table_print_rev - prints list in reverse
 * @ht: pointer to hash table
 * Return: nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->next != NULL)
		{
			printf(", ");
		}
		current = current->next;
		printf("}\n");
	}
}
