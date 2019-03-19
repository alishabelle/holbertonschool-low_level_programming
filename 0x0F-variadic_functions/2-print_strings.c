#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		if (separator != NULL)
			printf("%s", va_arg(print, char *));
	}
}
