#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - pointer to a memory block of 2D array of integers
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: Pointer to 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int i, j;

	if ((width < 1) && (height < 1))
		return (NULL);

	ptr = (int **)malloc((width) * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(height * sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);
	}
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}