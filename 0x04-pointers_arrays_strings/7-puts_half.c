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
<<<<<<< HEAD
	
       	for (n = x / 2; str[n] != 0; n++)
=======
	if (x % 2 != 0)
		x--;
	for (n = x / 2; str[n] != 0; n++)
>>>>>>> 951126a792d8921979e8b01642add719bac59269
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
