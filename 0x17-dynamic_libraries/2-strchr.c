#include <stdio.h>
#include "holberton.h"
/**
 *_strchr - the main function
 *@s: parameter
 *@c: parameter
 * Return: the return is a char
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0' && s[x] != c; x++)
		;
	if (s[x] == c)
		return (s + x);
	else
		return (NULL);
}
