#include "holberton.h"
/**
*_isdigit - The main function
*@c: parameter
*Return: The return value is zero
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
