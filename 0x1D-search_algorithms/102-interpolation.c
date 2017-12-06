#include <stdio.h>
#include "search_algos.h"

/**
 * printArray - prints subarray being evaluated
 * @array: array being inspected
 * @size: size of array
 * @i: index of array to print
 */
void printArray(int *array, size_t size, size_t i)
{
	if (i < size)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	else
		printf("Value checked array[%lu] is out of range\n", i);
}

/**
 * interpolation_search - search for value in sorted array of int with
 * Interpolation Search
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: data to search for
 * Return: index of found value or -1 if value is not found or empty array
 */
int interpolation_search(int *array, size_t size, int value)
{
	int v = value;
	size_t l = 0, h = size - 1;
	size_t pos;

	if ((size == 0) || (array == NULL))
		return (-1);

	pos = l + (((double)(h - l) / (array[h] - array[l])) * (v - array[l]));

	while ((array[h] != array[l]) && (v >= array[l]) &&
	       (v <= array[h]))
	{
		pos = l + ((v - array[l]) * (h - l) / (array[h] - array[l]));
		printArray(array, size, pos);

		if (array[pos] < v)
			l = pos + 1;
		else if (v < array[pos])
			h = pos - 1;
		else
			return (pos);
	}

	if (v == array[l])
		return (l);
	printArray(array, size, pos);
	return (-1);
}
