#include <stdio.h>
#include "holberton.h"
/**
 *factorial - the main function
 *@n: parameter
 * Return: the return is an int
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
