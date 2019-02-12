#include "holberton.h"
/**
*main - The main function
*Return: The return value is zero
**/

int _islower(int c)
{
	int ch;
	
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
