#include <stdio.h>
/**
 * array_iterator - run a function given as a parameter on each array element
 * @array: array elements to pass to action (function argument)
 * @size: size of array
 * @action: function to run
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
