#include "holberton.h"
/**
 *_print_rev_recursion - the main function
 *@s: parameter
 * Return: the return is void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
