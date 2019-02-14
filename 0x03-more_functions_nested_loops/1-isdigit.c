#include "holberton.h"
/**
*main - The main function
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
