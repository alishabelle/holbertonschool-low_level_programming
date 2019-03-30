#include "holberton.h"
/**
 *set_bit - function to set bits
 *@n: parameter
 *@index: parameter
 * Return
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}

