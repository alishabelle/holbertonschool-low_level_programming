#include "hash_tables.h"

/**
 * hash_table_print - print hash table in order as they appear in list 
 *@ht: parameter
 * Return: prints list returns nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *a;
	int x = 0, ind = 0;

	if (ht == NULL)
		return;

	for (x = ht->size - 1; ht->array[x] == NULL; x--)
		;
	a = ht->array[0];
	printf("{");
	for (; ind <= x; ind++, a = ht->array[ind])
	{
		for (; a != NULL; a = a->next)
		{
			if (x != ind && a != NULL)
				printf("'%s': '%s', ", a->key, a->value);
			else if ( a != NULL && x == ind)
				printf("'%s': '%s'", a->key, a->value);
		}
	}
	printf("}");
}
