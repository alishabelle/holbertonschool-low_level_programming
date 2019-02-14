#include "holberton.h"
/**
*jack_bauer - The main function
*Return: The return value is zero
**/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar('\n');
			if (h > 9)
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
			else
			{
				_putchar('0');
				_putchar(h + '0');
			}
			_putchar(':');
			if (m > 9)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar('0');
				_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
