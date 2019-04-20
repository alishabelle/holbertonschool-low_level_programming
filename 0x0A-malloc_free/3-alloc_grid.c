#include "holberton.h"
/**
 *alloc_grid - returns something to a two dim array
 *@width: parameter
 *@height: parameter
 * Return: returns a pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (height < 1 || width < 1)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		array[b] = malloc(width * sizeof(int));
		if (array[b] == NULL)
		{
			for (a = 0; a < b; a++)
				free(array[a]);
			free(array);
			return (NULL);
		}
		for (a = 0; a < width; a++)
			array[b][a] = 0;
	}
	return (array);
}
