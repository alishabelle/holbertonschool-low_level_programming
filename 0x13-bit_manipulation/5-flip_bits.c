#include "holberton.h"
/**
 *flip_bits - the function to flip bits
 *@n: parameter
 *@m: parameter
 * Return: return unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index;
	unsigned long int num;

	num = n ^ m;
	index = 0;
	while (num > 0)
	{
		if ((num & 1) != 0)
			index++;
		num = num >> 1;
	}
	return (index);
}
