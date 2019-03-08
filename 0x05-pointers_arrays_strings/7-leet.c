#include "holberton.h"
/**
 *leet - the main function
 *@a: parameter
 * Return: the return is a char
 */
char *leet(char *a)
{
	char arr[] = "aAeEoOtTlL";
	char parr[] = "4433007711";
	int x, y;

	for (x = 0; a[x] != '\0'; x++)
		for (y = 0; arr[y] != '\0'; y++)
		{
			if (a[x] == arr[y])
				a[x] = parr[y];
		}
	return (a);
}
