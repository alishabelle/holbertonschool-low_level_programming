#include "holberton.h"
/**
 *print_rev - the main function
 *@s: parameter
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
		;
	x--;
	for (; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');


}
