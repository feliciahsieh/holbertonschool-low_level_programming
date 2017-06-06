#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - create char array and init it with a specific char
 * @size: the size of the memory to print
 * @c: char to init values to
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i;

	if (size > 0)
	{
		ptr = (char *)malloc(size * sizeof(char));
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			ptr[i] = c;
	}
	return (ptr);
}
