#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d created grid in alloc_grid
 * @grid: pointer to pointer
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: 0 when successful
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
