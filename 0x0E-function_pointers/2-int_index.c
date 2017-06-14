#include <stdio.h>
#define NOTFND -1

/**
 * int_index - search for an integer
 * @array: array of integers to search for
 * @size: size of array
 * @cmp: pointer to the functio to be used to compare values
 * Return: array index of found integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ndx, result = NOTFND;

	if ((size <= 0) || !array || !cmp)
		result = NOTFND;
	else
	{
		for (i = 0; i < size; i++)
		{
			ndx = cmp(array[i]);
			if (ndx != 0)
			{
				result = i;
				break;
			}
			else
				result = NOTFND;
		}
	}
	return (result);
}
