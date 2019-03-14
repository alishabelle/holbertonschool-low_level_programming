#include "holberton.h"
/**
 *_strpbrk - the main function
 *@s: parameter
 *@accept: parameter
 * Return: the return is a char
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
			if (s[x] == accept[y])
				return (s + x);
	}
	return ('\0');
}
