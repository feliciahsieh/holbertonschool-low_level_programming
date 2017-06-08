#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "holberton.h"
/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of memory to create
 * Return: pointer to new memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(ptr));
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
