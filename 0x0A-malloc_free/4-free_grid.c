#include "holberton.h"
/**
 *free_grid - free 2D array
 *@grid: parameter
 *@height: parameter
 * Return: return is void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
