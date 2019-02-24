#include "holberton.h"
/**
 *print_triangle - the main function
 *@size: parameter
 * Return: the return is void
 */
void print_triangle(int size)
{
	int space, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (space = 0; space < size; space++)
		{
			for (x = space + 1; x < size; x++)
				_putchar(' ');
			for (x = 0; x <= space; x++)
				_putchar('#');
			_putchar('\n');
		}
	}

}
