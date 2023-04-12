#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees a 2-D grid.
 *@grid: the array that was formerly created
 *@height: is the column parameter
 *Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
