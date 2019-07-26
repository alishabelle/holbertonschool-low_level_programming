#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 *@ht: hashtable parameter
 *@key: parameter
 *@value: parameter
 * Return: returns 1 if succeded 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indexer;
	hash_node_t *new_jawn;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	indexer = key_index((const unsigned char *)key, ht->size);

	if (ht->array[indexer] != NULL && strcmp(ht->array[indexer]->key, key) == 0)
	{
		ht->array[indexer]->value = strdup(value);
		return (1);
	}

	new_jawn = malloc(sizeof(hash_node_t));
	if (new_jawn == NULL)
		return (0);

	new_jawn->value = strdup(value);
	new_jawn->key = strdup(key);
	new_jawn->next = ht->array[indexer];
	ht->array[indexer] = new_jawn;
	return (1);

}
