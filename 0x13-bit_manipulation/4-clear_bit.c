#include <stdio.h>
#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to evaluate
 * @index: where the bit should be cleared
 * Return: 1 if it worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(unsigned long int)))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
