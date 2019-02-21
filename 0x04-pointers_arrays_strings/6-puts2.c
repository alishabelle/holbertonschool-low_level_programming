#include "holberton.h"
/**
 *puts2 - the main function
 *@str: paramter
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
		if (x % 2 == 0)
			_putchar(str[x]);
	_putchar('\n');
}
