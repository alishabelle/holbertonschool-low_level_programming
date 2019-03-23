#include <stdio.h>
#include "holberton.h"
/**
 *print_chessboard - the function
 *@a: parameter
 * Return: the reutrn is void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (col = 0; col <= 7; col++)
	{
		for (row = 0; row <= 7; row++)
			_putchar(a[col][row]);
		_putchar('\n');
	}
}
