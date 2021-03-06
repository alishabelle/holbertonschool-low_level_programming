#include <stdio.h>
#include "holberton.h"
/**
 *_strstr - the function
 *@haystack: parameter
 *@needle: parameter
 * Return: the return is a char
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack, *b = needle;

	for (; *haystack; haystack++, a++)
	{
		for (; *b != '\0' && *a == *b; a++, b++)
			;
		a = haystack;
		if (*b == '\0')
			return (haystack);
		b = needle;
	}
	return (NULL);
}
