#include "hash_tables.h"

/**
 * hash_table_delete - function to delete hash table
 *@ht: parameter
 * Return: returns nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = ht->array[i]->next;
		}
	}
	free(ht->array);
	free(ht);
}
