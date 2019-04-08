#include "holberton.h"
#include <stdio.h>
/**
 *_sqrt_recursion - function returns square root of a number
 *@n: parameter
 * Return: the return is an int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(0, n));
}


int _sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	return (_sqrt(a + 1, b));
}

