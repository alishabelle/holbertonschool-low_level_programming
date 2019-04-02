#include <stdio.h>
/**
*main - advanced
*Return: The return value is zero
*/

int main(void)
{
	int x;
	int z;

	for (x = '0'; x <= '9'; x++)
	{
		for (z = '0'; z <= '9'; z++)
		{
			if (x < z)
			{
				putchar(x);
				putchar(z);
				if (x < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
