#include <stdio.h>
/**
 *main - the main function
 * Return: the return is void
 */
int main(void)
{
	int n = 0;
	int sum = 0;

	for (; n < 1024; n++)
	{
		if (n % 5 == 0 || n % 3 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
