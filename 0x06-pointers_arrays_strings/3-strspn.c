#include "holberton.h"
/**
 *_strspn - the main function
 *@s: parameter
 *@accept: parameter
 * Return: the return is an int
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
			if (s[x] == accept[y])
				accept++;
	}
	return (x);
}
