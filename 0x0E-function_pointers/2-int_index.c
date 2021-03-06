#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - the function
 *@array: parameter
 *@size: parameter
 *@cmp: parameter
 * Return: returns an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, x;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; size > index; index++)
	{
		x = cmp(array[index]);
		if (x != 0)
		{
			return (index);
		}
	}
	return (-1);
}
