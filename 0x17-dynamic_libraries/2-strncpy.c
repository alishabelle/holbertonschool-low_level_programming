#include "holberton.h"
/**
 *_strncpy - the main function
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 * Return: the return is a char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
