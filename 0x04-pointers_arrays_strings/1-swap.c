#include "holberton.h"
/**
 *swap_int - the main function
 *@a: parameter
 *@b: parameter
 * Return: the return value is 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
