#include "holberton.h"
/**
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		if (y < n)
		{
			dest[x + y] = src[y];
		}
	}
	return (dest);
}
