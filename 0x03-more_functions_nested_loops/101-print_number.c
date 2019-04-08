#include "holberton.h"
/**
 *print_number - function to print an integer
 *@n: parameter
 * Return: return is void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
