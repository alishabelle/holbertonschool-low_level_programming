#include <stdio.h>
#include "holberton.h"
/**
 *puts_half - the main function
 *@str: parameter
 * return - the return is void
 */
void puts_half(char *str)
{
	int x, n;

	for (x = 0; str[x] != 0; x++)
		;
		x--;
		for (n = (x / 2) + 1; str[n] != 0; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
