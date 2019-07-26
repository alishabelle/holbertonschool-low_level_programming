#include <unistd.h>
#include <stdio.h>
/**
 *main - my main function
 * Return: the return is void
 */
int main(void)
{
	int x;
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (x = 0; str[x] != '\0'; x++)
		;
	write(2, str, x);
	return (1);
}
