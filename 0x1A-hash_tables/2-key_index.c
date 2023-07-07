#include "hash_tables.h"

/**
 * key_index - returns the index of the key
 * @key: refers to the key which index is found
 * @size: is the size of the hash table
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
