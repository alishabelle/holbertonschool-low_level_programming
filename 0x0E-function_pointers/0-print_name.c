#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - the function
 *@name: parameter
 *@f: parameter
 * Return: the return is void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
