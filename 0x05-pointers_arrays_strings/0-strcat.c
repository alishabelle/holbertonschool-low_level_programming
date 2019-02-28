#include "holberton.h"
/**
 *_strcat - the main function
 *@dest: parameter
 *@src: parameter
 * Return: the return is a character
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
		}
	dest[x] = '\0';
	return (dest);
}
