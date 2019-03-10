#include <stdio.h>
#include "holberton.h"
/**
 *_strchr - the main function
 *@s: parameter
 *@c: parameter
 * Reutrn - the return is a char
 */
char *_strchr(char *s, char c)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	if (*s == c)
		return (s);
	else
		return NULL;
}
