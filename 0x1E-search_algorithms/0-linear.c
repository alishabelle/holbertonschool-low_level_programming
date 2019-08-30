#include "search_algos.h"
/**
 * linear_search - some algo
 *@array: parameter
 *@size: parameter
 *@value: parameter
 * Return: returns an int
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (array[a] == value)
		{
			printf("Value checked array[%i] = [%i]\n", a, array[a]);
			return (a);
		}
		printf("Value checked array[%i] = [%i]\n", a, array[a]);
	}
	return (-1);
}
