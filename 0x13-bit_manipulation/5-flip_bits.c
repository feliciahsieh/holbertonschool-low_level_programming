#include <stdio.h>
#include "holberton.h"
/**
 * flip_bits - returns the number of bits to flip to get from one to the other
 * @n: number to evaluate
 * @m: number to change to
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int target = 0, mask, result;
	unsigned long int i, count = 0;

	mask = ~0;
	mask = mask >> 1;
	mask = ~mask;

	target = n ^ m;

	for (i = 0; i < (8 * sizeof(unsigned long int)); i++)
	{
		result = target & mask;
		if (result > 0)
			count++;
		mask = mask >> 1;
	}

	return (count);
}
