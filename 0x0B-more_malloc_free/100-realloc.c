#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _realloc - reallocate memory block using malloc and free
 * @ptr: ptr to old allocated malloc call
 * @old_size: bytes of allocated 0
 * @new_size:
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = NULL;
	unsigned int minSize = 0, i;

	if (old_size == new_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	minSize = (old_size < new_size) ? old_size : new_size;

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i < minSize; i++)
			p[i] = ((char *)ptr)[i];
	}

	return ((void *)p);
}
