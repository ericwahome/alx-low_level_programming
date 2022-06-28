#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory taken up by the grid created previously
 * @grid: grid to free
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int m;

	if (grid == NULL || height <= 0)
		return;
	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
