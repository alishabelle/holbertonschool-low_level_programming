#include "holberton.h"
/**
*print_alphabet_x10 - prints out alphabet
*Return: The return is the alphabet 10x
**/

void print_alphabet_x10(void)
{
	int a;
	int x;

	for (a = 0; a <= 9; a++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
