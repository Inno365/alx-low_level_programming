#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees the memory allacated by alloc_grid method.
 *@grid: grid to be free.
 *@height: height of grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
