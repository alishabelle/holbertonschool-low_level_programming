#include <stdio.h>
#include "holberton.h"
/**
 *_strlen_recursion - the main function
 *@s: parameter
 * Return: the return is an int
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	len++;
	return (1 + _strlen_recursion(++s));
}
