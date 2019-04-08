#include "holberton.h"
/**
 *print_number - function to print an integer
 *@n: parameter
 * Return: return is void
 */
void print_number(int n)
{
	unsigned int m;

	if (n  < 0)
	{
		_putchar('-');
		n = -n;
	}
	m = (unsigned int)n;
	if (m / 10)
		print_number(m / 10);
	_putchar(m % 10 + '0');
}
