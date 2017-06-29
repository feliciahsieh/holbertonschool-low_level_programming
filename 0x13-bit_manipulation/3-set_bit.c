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
	unsigned int bitop = 1;
	unsigned int i;

	if (index > 31)
		return (ERROR_B);

	for (i = 0; i < index; i++)
		bitop = bitop << 1;

	*n = *n | bitop;

	return (1);
}
