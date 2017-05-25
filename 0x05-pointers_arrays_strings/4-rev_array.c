#include "holberton.h"
/**
 * reverse_array - reverse array of integers
 * @a: array to be reversed
 * @n: number of array elements
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
