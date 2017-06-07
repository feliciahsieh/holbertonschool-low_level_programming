#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - release memory for 2 dim grid from previous work
 *
 * @grid: pointer to array of integers
 * @height: number of col
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if ((grid == NULL) || (height == 0))
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
