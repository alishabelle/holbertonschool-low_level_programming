#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 *@key: parameter
 *@size: size of array
 * Return: returns index of key (int)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int indexer = 0;

	indexer = (hash_djb2(key) % size);

	return (indexer);
}
