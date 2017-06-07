#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - frees a 2 dimensional grid by alloc_grid()
 * @grid: 2D array of integers
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if ((grid == NULL) || (height < 1))
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
