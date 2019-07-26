#include "holberton.h"
/**
 *_isalpha - checks alphabet char
 *@c: parameter
*Return: The return value is zero
 **/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
