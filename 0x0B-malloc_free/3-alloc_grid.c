#include "main.h"
#include<stdlib.h>

/**
 * alloc_grid - allocates a 2D array
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		*(grid + x) = (int *)malloc(width * sizeof(int));

		if (*(grid + x) == NULL)
		{
			for (y = 0; y <= x; y++)
				free(grid[y]);
			free(grid);

			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			grid[y][x] = 0;
		}
	}

	return (grid);
}
