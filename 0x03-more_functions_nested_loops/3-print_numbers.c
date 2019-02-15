#include "holberton.h"
/**
*print_numbers - The main function
* Return: The return value is zero
**/
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
