#include "holberton.h"
/**
 *clear_bit - the main function to clear a bit
 *@n: parameter
 *@index: parameter
 * Return: the return is an integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int del;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	del = -(1 << index);
	*n = *n & del;
	return (1);
}
