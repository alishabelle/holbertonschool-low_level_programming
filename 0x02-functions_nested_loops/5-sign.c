#include "holberton.h"
/**
 *print_sign - prints sign with number
 *@n: parameter
 *Return: The return value is zero
 **/

int print_sign(int n)
{
	if(n > 0)
	{	_putchar('+');
			return (1);
	}
	else if (n == 0)
	{	_putchar(0);
			return (0);
	}
	else
		_putchar('-');
			return (-1);
}
