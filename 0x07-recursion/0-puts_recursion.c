#include <stdio.h>
#include "holberton.h"
/**
 *_puts_recursion - the function that prints a string
 *@s: parameter
 * Return: the return is void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
