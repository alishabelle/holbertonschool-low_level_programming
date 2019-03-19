#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - the function
 *@separator: parameter
 *@n: parameter
 * Return: returns void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int x;
	char *str;

	va_start(print, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(print, char *);
		printf("%s", str);
		if (x < n - 1 && separator != NULL)
			printf("%s", separator);
		if(str == NULL)
			printf("(nil)");
	}
	va_end(print);
	printf("\n");
}
