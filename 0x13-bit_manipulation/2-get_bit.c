#include "holberton.h"
/**
 *get_bit - the function to return a bit at index
 *@n: parameter
 *@index: parameter
 * Return: returns an int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int jank[1024];

	int x = 0;

	if (index > 63)
	{
		return (-1);
	}
	while (n > 0)
	{
		jank[x] = n % 2;
		n = n / 2;
		x++;
	}
	if (jank[index] == 1)
	{
		return (1);
	}
	return (0);
}
