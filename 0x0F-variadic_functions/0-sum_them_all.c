#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *sum_them_all - the function
 *@n: parameter
 * Return: the return is an int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int x;
	unsigned int sum = 0;


	if (n == 0)
		return (0);

	va_start(add, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(add, unsigned int);
	}
	va_end(add);
	return (sum);

}
