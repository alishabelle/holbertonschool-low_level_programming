#include <stdio.h>
/**
 *main - the main function
 * Return - the return is void
 */
int main(void)
{
	int a;
        int x;
        int z;

	for (a = '0'; a <= '9'; a++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (x < z)
				{
					putchar(a);
					putchar(x);
					putchar(z);
					if (x <= '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}	putchar('\n');
		return (0);
}
