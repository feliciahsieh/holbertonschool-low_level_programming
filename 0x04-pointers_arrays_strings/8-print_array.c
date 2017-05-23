#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints n elements of array of int
 * @a: array
 * @n: number of elements to be printed
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
