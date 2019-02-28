#include "holberton.h"
/**
 *reverse_array - the main function
 *@a: parameter
 *@n: parameter
 */
void reverse_array(int *a, int n)
{
	int x, y;

	n = n - 1;
	for (x = 0; x < n; x++, n--)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
