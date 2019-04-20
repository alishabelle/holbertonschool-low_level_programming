#include "holberton.h"
/**
 *free_grid - free 2D array
 *@grid: parameter
 *@height: parameter
 * Return: return is void
 */
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
