#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * printArray - prints subarray being evaluated
 * @array: array being inspected
 * @i: index of array to print
 */
void printArray(int *array, size_t i)
{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
}

/**
 * jump_search - search for value in sorted array of int using Jump Search
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: data to search for
 * Return: index of found value or -1 if value is not found or empty array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t l = 0, step = sqrt(size), r, i;

	if ((size == 0) || (array == NULL) || (step >= size))
		return (-1);
	r = step;
	printArray(array, l);
	while ((r < size) && (array[r] <= value))
	{
		if (l != 0)
			printArray(array, l);
		l = r;
		r += step;
	}
	if ((l != 0) && (r < size))
	{
		l -= step;
		r -= step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", l, r);
	for (i = l; (i <= r) && (i < size); i++)
	{
		printArray(array, i);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
