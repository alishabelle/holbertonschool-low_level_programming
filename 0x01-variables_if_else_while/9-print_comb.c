#include <stdio.h>
/**
*main - all single digit combos
*Return: The return are numbers with commas and a space
**/

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
