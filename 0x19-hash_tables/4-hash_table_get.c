#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - retrieve a value associated with a key
 *@ht: parameter
 *@key: parameter
 * Return: value associated with key or null if none
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_jawn;
	unsigned long int indexer;

	if (ht == NULL || key == NULL)
		return (NULL);

	indexer = key_index((unsigned char *)key, ht->size);

	new_jawn = ht->array[indexer];

	while (new_jawn)
	{
		if (strcmp(new_jawn->key, key) == 0)
			return (new_jawn->value);
		new_jawn = new_jawn->next;
	}
	return (NULL);
}
