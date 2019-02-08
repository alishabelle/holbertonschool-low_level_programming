#include <stdio.h>
/**
*main - print all single digits
*Return: single digits
**/
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
