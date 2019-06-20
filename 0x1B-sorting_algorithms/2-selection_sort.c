#include "sort.h"

/**
 * selection_sort - select sort array
 *@array: parameter
 *@size: parameter
 * Return: returns void
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, lil;
	int store;

	if (size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		lil = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[lil])
			{
				lil = y;
			}
		}
		if (lil != x)
		{
			store = array[x];
			array[x] = array[lil];
			array[lil] = store;
			print_array(array, size);
		}
	}
}
