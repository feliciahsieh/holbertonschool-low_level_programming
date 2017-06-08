#include <stdio.h>
#include "holberton.h"
/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of memory to create
 * Return: pointer to new memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
		return (NULL);

	printf("Read b:%d\n", b);

	return (ptr);
}
