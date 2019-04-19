#include <stdlib.h>
#include "holberton.h"
/**
 *create_array - function creates an array of chars
 *@size: parameter
 *@c: parameter
 * Return: returns a char
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int x;



	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * (sizeof(char)));
	if (a == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		a[x] = c;
	}
	return (a);
}
