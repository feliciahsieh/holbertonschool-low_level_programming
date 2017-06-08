#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements of each size bytes
 * @size: size of array
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
