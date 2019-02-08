#include <stdio.h>
/**
*main - prints alphabet lowercase in reverse
*Return: The return is the alphabet
**/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
