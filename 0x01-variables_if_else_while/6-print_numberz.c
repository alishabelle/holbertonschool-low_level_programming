#include <stdio.h>
/**
*main - print single digits base 10
*Return: The return are numbers
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
