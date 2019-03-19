#ifndef _VARIADIC_FUNCTION_H_
#define _VARIADIC_FUNCTION_H_
#include <stdarg.h>
/**
* struct funct - function
*
* @s: type
* @f: function pointer
*/
typedef struct funct
{
	char s;
	void (*f)();
} jank;



int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
