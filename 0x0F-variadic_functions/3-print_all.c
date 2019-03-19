#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *funct_c - function that prints chars
 *@print: parameter
 * Return: void
 */
void funct_c(va_list print)
{
	printf("%c", va_arg(print, int));
}

/**
 *funct_i - function that prints ints
 *@print: parameter
 * Return: void
 */
void funct_i(va_list print)
{
	printf("%d", va_arg(print, int));
}

/**
 *funct_s - the function that prints strings
 *@print: parameter
 * Return: void
 */
void funct_s(va_list print)
{
	char *str = va_arg(print, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
printf("%s", str);
}

/**
 *funct_f - function that prints floats
 *@print: parameter
 * Return: void
 */
void funct_f(va_list print)
{
	printf("%f", va_arg(print, double));
}

/**
 *print_all - the function
 *@format: parameter
 * Return: void
 */
void print_all(const char * const format, ...)
{
/**
 * struct funct - the function
 */
	struct funct arr[] = {
		{'c', funct_c},
		{'i', funct_i},
		{'s', funct_s},
		{'f', funct_f},
		{'\0', NULL}
	};
	va_list print;
	int x = 0, y;
	char *space = "", *sep = ", ";

	va_start(print, format);

	while (format != NULL  && format[x] != '\0')
	{
		y = 0;
		while (arr[y].s != '\0')
		{
			if (format[x] == arr[y].s)
			{
				printf("%s", space);
				arr[y].f(print);
				space = sep;
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(print);
}
