#include <stdio.h>
#include "search_algos.h"

/**
 * printArrayList - prints subarray being evaluated
 * @array: array being inspected
 * @l: left index of array to print
 * @r: right index of array to print
 */
void printArrayList(int *array, size_t l, size_t r)
{
	size_t a;

	array = array;

	printf("Searching in array: ");
	for (a = l; a < r; a++)
	{
		if (a != l)
			printf(", ");
		printf("%d", array[a]);
	}
	printf("\n");
}

/**
 * printArray - prints subarray being evaluated
 * @array: array being inspected
 * @i1: index of array to print
 * @i2: rightbound of array to print
 * @msg: message number to print
 */
void printArray(int *array, size_t i1, size_t i2, int msg)
{
	array = array;
	if (msg == 0)
		printf("Value checked array[%lu] = [%d]\n", i1, array[i1]);
	else
		printf("Value found between indexes [%lu] and [%lu]\n", i1, i2);
}

/**
 * binary - find value in sorted array of int with Binay Search
 * @array: pointer to the first element of the array to search in
 * @value: data to search for
 * @l: left index to search
 * @r: right index to search
 * Return: index of found value or -1 if value is not found or empty array
 */
size_t binary(int *array, int value, size_t l, size_t r)
{
	int left_side = 0;
	size_t m = (l + r) / 2;

	if ((l > r) || (array == NULL))
		return (-1);

	if (left_side)
		printArrayList(array, l, r);
	else
		printArrayList(array, l, r + 1);
	if (array[m] == value)
	{
		if (array[m - 1] == value)
		{
			printArrayList(array, m - 1, m);
			return (binary(array, value, m - 1, m - 1));
		}
		else
			return (m);
	}
	if (array[m] < value)
	{
		left_side = 0;
		return (binary(array, value, m + 1, r));
	}
	else
	{
		left_side = 1;
		return (binary(array, value, l, m - 1));
	}
}

/**
 * advanced_binary - find value in sorted array of int with Adv Binay Search
 * @array: pointer to the first element of the array to search in
 * @size: size of array
 * @value: data to search for
 * Return: index of found value or -1 if value is not found or empty array
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t l = 0, m = size / 2, r = size - 1;
	int left_side = 0;

	left_side = left_side;
	if ((size == 0) || (array == NULL))
		return (-1);

	if (l > r)
		return (-1);
	if (left_side)
		printArrayList(array, l, r);
	else
		printArrayList(array, l, r + 1);
	m = (size - 1) / 2;
	if (array[m] == value)
	{
		if (array[m - 1] == value)
		{
			return (binary(array, value, m - 1, m - 1));
		}
		else
			return (m);
	}
	if (array[m] < value)
	{
		left_side = 0;
		return (binary(array, value, m + 1, r));
	}
	else
	{
		left_side = 1;
		return (binary(array, value, l, m - 1));
	}
	return (-1);
}
