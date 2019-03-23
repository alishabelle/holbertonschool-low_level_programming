#include <stdio.h>
#include "holberton.h"
/**
 *print_chessboard - the function
 *@a: parameter
 * Return: the reutrn is void
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;/*(x)*/
        int col = 0;/*(y)*/

	for (; col < 8; col++)
	{
		for (; row < 8; row++)
			_putchar(a[col][row]);
		_putchar('\n');
	}
}
