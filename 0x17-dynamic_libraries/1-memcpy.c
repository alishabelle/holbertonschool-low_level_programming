#include "holberton.h"
/**
 *_memcpy - the main function
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 * Return: the return
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;
	char *y = src;

	while (x < n)
	{
		dest[x] = src[x];
		y++;
		x++;
	}

	return (dest);
}
