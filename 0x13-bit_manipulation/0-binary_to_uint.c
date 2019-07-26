#include "holberton.h"
/**
 *binary_to_uint - the function to convert binary number
 *@b: parameter
 * Return: the return is an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int chan = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);
		chan = 2 * chan + (*b++ - '0');
	}
	return (chan);
}
