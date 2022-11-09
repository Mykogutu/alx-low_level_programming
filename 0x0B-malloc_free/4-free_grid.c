#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid
 * @grid: two dimensional grid
 * @height: height of grid
 *
 * Returns: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	int *ptr;

	for (i = 0; i < height; i++)
	{
		ptr = grid[i];
		free(ptr);
	}
	free(grid);
}
