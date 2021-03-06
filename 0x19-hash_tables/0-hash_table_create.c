#include "hash_tables.h"

/**
 * hash_table_create - a function that creates hash table
 *@size: size of the array
 * Return: returns a pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));

	if (new == NULL)
		return (NULL);

	new->array = malloc(size * sizeof(hash_node_t *));

	if (new->array == NULL)
		return (NULL);

	new->size = size;
	return (new);
}
