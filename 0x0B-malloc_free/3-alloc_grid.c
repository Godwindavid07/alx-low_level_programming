#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates a 2D array of intigers
 * @width: width of the array
 * @height: hieght of the array
 * Return: pointer yo the array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int j, i;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int *) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
