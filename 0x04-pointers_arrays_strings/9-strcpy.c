#include "holberton.h"
/**
 *_strcpy - the main function
 *@dest: parameter
 *@src: parameter
 * Return: the return is a character
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != 0; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
