#include <stdio.h>
/**
 * main - the main function
 * Return: the return
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((x % 3) && (x % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	putchar('\n');
	return (0);
}
