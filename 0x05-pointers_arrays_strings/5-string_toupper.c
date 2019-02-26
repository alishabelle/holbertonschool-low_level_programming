#include "holberton.h"
/**
 *
 *
 */
char *string_toupper(char *a)
{
	char *x = a;

	for (; *x != '\0'; x++)
	{
		if (*x >= 97 && *x <= 122)
			*x = *x - 32;
	}
	return (a);
}
