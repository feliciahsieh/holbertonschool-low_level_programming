#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - create array of int from min to max values
 * @min: minimum number for initialization
 * @mix: maximum number for initialization
 * Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i;

	if (min > max)
		return (ptr);

	ptr = malloc((max - min + 1) * sizeof(ptr));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (max - min) + 1; i++)
		ptr[i] = min + i;

	return (ptr);
}
