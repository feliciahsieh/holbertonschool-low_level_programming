#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - duplicate str in a new memory block
 * @str: string to duplicate
 * Return: Pointer to new memory block of a copy of str
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	unsigned int i, size = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	ptr = (char *)malloc(size * sizeof(char));

	if ((ptr != NULL) && (str != NULL))
	{
		for (i = 0; i < size; i++)
			ptr[i] = str[i];
	}

	return (ptr);
}
