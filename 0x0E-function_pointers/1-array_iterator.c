#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - the function
 *@array: parameter
 *@size: parameter
 *@action: parameter function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (x = 0; size > x; x++)
		action(array[x]);
}
