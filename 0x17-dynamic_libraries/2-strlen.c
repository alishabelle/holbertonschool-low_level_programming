#include "holberton.h"
/**
 *_strlen - the main function
 *@s: parameter
 * Return: the return value is 0
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
		;
	return (x);
}
