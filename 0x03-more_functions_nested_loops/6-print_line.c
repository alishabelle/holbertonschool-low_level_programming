#include "holberton.h"
/**
*print_line - The main function
*@n: parameter
* Return: The return value is zero
**/
void print_line(int n)
{
	if (n < 0)
		_putchar('\n');
	else
		_putchar('_');
}
