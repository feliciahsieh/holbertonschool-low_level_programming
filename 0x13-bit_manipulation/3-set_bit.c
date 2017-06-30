#include <stdio.h>
#include "holberton.h"
#define ERROR_B -1
/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: number to set
 * @index: index to set
 * Return: 1 if success, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (ERROR_B);

	*n |= 1 << index;

	return (1);
}
