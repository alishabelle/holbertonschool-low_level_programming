#include "holberton.h"
/**
*print_last_digit - prints last digit of a number
*@x: parameter
*Return: The return value is zero
**/
int print_last_digit(int x)
{
	if (x < 0)
	{
		x = x % -10;
	}
	else
	{
		x = x % 10;
	}
	if (x < 0)
	{
		x = -x;
	}
	_putchar('0' + x);
	return (x);
}
