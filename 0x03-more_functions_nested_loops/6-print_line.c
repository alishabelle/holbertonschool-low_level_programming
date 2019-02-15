#include "holberton.h"
/**
*print_line - The main function
*@n: parameter
* Return: The return value is zero
**/
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
