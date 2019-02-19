#include "holberton.h"
/**
 *print_square - main function
 *@size: parameter
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			_putchar('\n');
			for (y = 0; y < size; y++)
				_putchar('#');
		}
	}
}
