#include "holberton.h"
/**
 *_memset - the main function
 *@s: parameter
 *@b: parameter
 *@n: paramter
 * Return: the return is a char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	char *y;

	y = s;

	for (x = 0; x < n; x++)
	{
		*s = b;
		s++;
	}
	return (y);
}
