#include <stdio.h>
#include "holberton.h"
/**
 *print_array - the main function
 *@a: parameter
 *@n: parameter
 * Return: the return is void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d",  a[x]);
		if (x < (n - 1))
			printf(", ");
		else
			printf("\n");
 	}
}
