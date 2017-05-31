#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of 2 diagonals of a square matrix
 * @a: matrix of integers
 * @size: sizeo f matrix
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i, sumDownSlope = 0, sumUpSlope = 0;

	for (i = 0; i < size; i++)
	{
		sumDownSlope += *(a + ((size * i) + i));
		sumUpSlope += *(a + (size - 1) * (i + 1));
	}
	printf("%d, %d\n", sumDownSlope, sumUpSlope);
}
