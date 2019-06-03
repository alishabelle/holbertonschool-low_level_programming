#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 *@key: parameter
 *@size: size of array
 * Return: returns index of key (int)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hasher = 0;
	int x;

	for (x = 0; key != NULL && key[x] != '\0'; x++)
		hasher = (hasher + key[x]) % size;
	return (hasher);
}
