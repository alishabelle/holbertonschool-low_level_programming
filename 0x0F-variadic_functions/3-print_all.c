#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *
 *
 *
 */

void funct_c(va_list print)
{
	printf("%c", va_arg(print, int));
}
void funct_i(va_list print)
{
	printf("%d", va_arg(print, int));
}
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
void funct_f(va_list print)
{
	printf("%f", va_arg(print, double));
}

void print_all(const char * const format, ...)
{


	struct funct arr[] = {
		{'c', funct_c},
		{'i', funct_i},
		{'s', funct_s},
		{'f', funct_f},		
		{'\0', NULL}
	};

       	va_list print;
	int x = 0, y;
	char *space = " ", *sep = ",";

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
