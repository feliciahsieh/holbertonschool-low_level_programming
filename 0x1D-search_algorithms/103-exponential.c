#include <stdio.h>
#include "search_algos.h"

/**
 * printArray - prints subarray being evaluated
 * @array: array being inspected
 * @i1: index of array to print
 * @i2: rightbound of array to print
 * @msg: message number to print
 */
void printArray(int *array, size_t i1, size_t i2, int msg)
{
	if (msg == 0)
		printf("Value checked array[%lu] = [%d]\n", i1, array[i]);
	else
		printf("Value found between indexes [%lu] and [%lu]\n", i1, i2);
}

/**
 * binarySearch - search for value in sorted array of int using Binary Search
 * @array: pointer to the first element of the array to search in
 * @value: data to search for
 * @lo: lower bound of array
 * @hi: higher bound of array
 * Return: index of found value or -1 if value is not found or empty array
 */
size_t binarySearch(int *array, int value, size_t lo, size_t hi)
{
	size_t l = lo, m = (lo + hi) / 2, r = hi;
	int left_side = 0;

	left_side = left_side;

	if ((hi == 0) || (array == NULL))
		return (-1);

	while (1)
	{
		if (l > r)
			return (-1);
		m = ((l + r) / 2);
		if (array[m] != value)
		{
                        /* if (left_side)
				printArray(array, m);
			else
				printArray(array, m);
                        */
			if (array[m] < value)
			{
				l = m + 1;
				left_side = 0;
			}
			else if (array[m] > value)
			{
				r = m - 1;
				left_side = 1;
			}
		}
		else
		{
			printArray(array, m, hi);
			return (m);
		}
	}
	return (-1);
}

/**
 * exponential_search - search for value in sorted array of int with
 * Interpolation Search
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: data to search for
 * Return: index of found value or -1 if value is not found or empty array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min;

	if ((size == 0) || (array == NULL))
		return (-1);

	while ((bound < size) && (array[bound] < value))
	{
		printArray(array, bound, 0);
		bound *= 2;
	}

	min = ((bound < size) ? bound : size);
	return (binarySearch(array, value, bound / 2, min));
}
