#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - print array
 * @array: sorted array of integers
 * @l: left index
 * @r: right index
 * Return: None
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i < r; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}


/**
 * binarySearch - wrapper for binary_search
 * @array: sorted array of integers
 * @l: start index to search
 * @r: end index to search
 * @value: target value to search for
 * Return: -1 if not found or array is NULL. Otherwise, return index
 */
int binarySearch(int *array, size_t l, size_t r, int value)
{
	size_t m = 0;
	int index = -1;

	if (l > r)
	{
		return (-1);
	}

	m = (l + r) / 2;

	print_array(array, l, r);
	if (array[m] < value)
	{
		index = binarySearch(array, m + 1, r, value);
	}
	if (array[m] > value)
	{
		index = binarySearch(array, l, m, value);
	}
	if (array[m] == value)
	{
		return (m);
	}

	return (index);
}


/**
 * binary_search - search for value in sorted array using Binary Search
 * @array: sorted array of integers
 * @size: size of array
 * @value: target value to search for
 * Return: -1 if not found or array is NULL. Otherwise, return index
 */
int binary_search(int *array, size_t size, int value)
{
	int index = -1;
	size_t l = 0;
	size_t r = size - 1;

	if (array == NULL)
		return (-1);

	index = binarySearch(array, l, r, value);

	return (index);
}
