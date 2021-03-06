#include "holberton.h"
#include <stdio.h>
/**
 *_pow_recursion - function that returns x raised to the power of y
 *@x: parameter
 *@y: parameter
 * Return: the return is an int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y % 2 == 0)
	{
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	}
		else
			return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
