#include <stdio.h>
/**
*main - Prints alphabet in lowercase
*Return: The return value is zero
**/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
