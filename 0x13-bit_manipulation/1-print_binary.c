#include "holberton.h"
/**
 *print_binary - the function to print binary
 *@n: parameter
 * Return: the return is void
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp, check = 0;
	unsigned long int mask = 1;
	int index;

	index = sizeof(unsigned long int) * 8 - 1;

	for (; index >= 0; index--)
	{
		temp = n >> index;
		if ((temp & mask) == 0)
		{
			if (check == 1)
				_putchar('0');
		}
		else
		{
			check = 1;
			_putchar('1');
		}
	}
	if (n == 0)
		_putchar('0');
}
