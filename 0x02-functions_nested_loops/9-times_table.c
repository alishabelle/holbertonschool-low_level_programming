#include "holberton.h"

/**
*times_table - The main function
*Return: The return value is zero
**/
void times_table(void)
{
	int z, i, x;

	for (z = 0; z <= 9; z++)
	{
		_putchar ('0');
		{
			for (i = 1; i <= 9; i++)
		{
			x = z * i;
			if (x <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
	x++;
	_putchar('\n');
		}
}
}
