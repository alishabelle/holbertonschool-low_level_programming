#include "holberton.h"
/**
 *puts_half - the main function
 *@str: parameter
 */
void puts_half(char *str)
{
	int x, n;
	n = (str[ ] - 1) / 2;

	for (x = 0; str[x] != 0; x++)
		if ( str[x] % 2 != 0)
		{
			_putchar(str[n] + '0');
		}
	_putchar('\n');
}
