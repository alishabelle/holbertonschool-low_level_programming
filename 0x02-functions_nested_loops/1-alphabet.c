#include "holberton.h"
/**
*print_alphabet - prints out alphabet
*Return: The return is letters
**/

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

