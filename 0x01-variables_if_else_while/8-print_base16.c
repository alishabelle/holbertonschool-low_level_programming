#include <stdio.h>
/**
*main - print base16
*Return: The return is base16
**/
int main(void)
{
	char a;
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
