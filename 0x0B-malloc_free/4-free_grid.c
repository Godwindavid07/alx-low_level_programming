#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D array
 * @grid: pointer to the grid
 * @height: height of thr grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
