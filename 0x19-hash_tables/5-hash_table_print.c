#include "hash_tables.h"

/**
 * hash_table_print - print hash table in order as they appear in list
 *@ht: parameter
 * Return: prints list returns nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *a;
	unsigned int x = 0, ind = 0;

	if (ht == NULL)
		return;

	a = ht->array[0];
	putchar('{');
	for (ind = 0; ind < ht->size; ind++)
	{
		a = ht->array[ind];

		for (; a != NULL; a = a->next)
		{
			if (x == 1)
				printf(", ");
			printf("'%s': '%s'", a->key, a->value);
			x = 1;
		}
	}
	puts("}");
}
