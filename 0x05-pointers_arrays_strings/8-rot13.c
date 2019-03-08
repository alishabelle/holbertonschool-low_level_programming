#include "holberton.h"
/**
 * rot13 - the main function
 *@r: parameter
 * Return: the return is a char
 */
char *rot13(char *r)
{
	int x, y;
	char arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; r[x] != '\0'; x++)
		for (y = 0; arr[y] != '\0'; y++)
		{
			if (r[x] == arr[y])
				r[x] = arr2[y];
		}
	return (r);
}
