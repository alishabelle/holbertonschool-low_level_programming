#include "holberton.h"
/**
 *is_prime_number - function returns one if input integer is prime
 *@n: parameter
 * Return: the return is an int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(2, n));
}

/**
 *_prime - turns number into prime
 *@y: parameter
 *@n: parameter
 * Return: the return is an int
 */
int _prime(int y, int n)
{
	if (y < n)
	{
		if (n % y == 0)
		{
			return (0);
		}
		return (_prime(y = y + 1, n));
	}
			return (1);
}
