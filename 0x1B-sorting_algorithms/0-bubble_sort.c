#include "sort.h"

/**
 * bubble_sort - fas
 *@array: afa
 *@size: afa
 * Return: fdsfs
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	int i = 0, len, j = 0;

	len  = size - 1;

	if (size < 2)
		return;

	while (j < len)
	{
		while (i < len - j)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
			i++;
		}
		i = 0;
		j++;
	}
}
