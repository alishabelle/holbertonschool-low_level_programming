#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - the function
 *@separator: parameter
 *@n: parameter
 * Return: the return is void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int x;

	va_start(print, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(print, int));
		if (x < n - 1 && separator != NULL)
			printf("%s", separator);
	
      	}
	va_end(print);
	printf("\n");
}
