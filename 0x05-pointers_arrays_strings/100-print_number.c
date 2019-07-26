#include "holberton.h"
/**
 *print_number - the function to print numbers
 *@n: parameter
 * Return: the return is void
 */
void print_unumber(unsigned int n);


void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	print_unumber((unsigned int) n);
}
/**
 *print_unumber - made up function
 *@n: parameter
 * Return: the return is void
 */

void print_unumber(unsigned int n)
{
	if (n / 10)
		print_unumber(n / 10);
	_putchar((n % 10) + '0');
}
