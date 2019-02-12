#include "holberton.h"
/**
*_islower - checks for lowercase chars
*@c:  parameter entered in function
*Return: The return value is a number
**/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
