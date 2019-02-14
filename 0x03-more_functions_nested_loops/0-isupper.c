#include "holberton.h"
/**
*_isupper - The main function
*@c: parameter
*Return: The return value is zero
**/
int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
	{	
		return (1);
	}
	return (0);
}
