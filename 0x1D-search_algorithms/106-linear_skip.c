#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - find value in sorted array of int using a Skip list
 * @list: pointer to the first element of the list to search
 * @value: data to search for
 * Return: pointer to node of value or NULL otherwise
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *c, *prev = NULL;

	if (list == NULL)
		return (NULL);
	c = list;

	if (c->n == value)
		return (c);

	while ((c != NULL) && (c->n < value))
	{
		prev = c;
		c = c->express;
		printf("Value checked at index [%lu] = [%d]\n", c->index, c->n);
	}
	printf("Value found between indexes [%lu] = [%lu]\n",
	       prev->index, c->index);
	for (c = prev; c; c = c->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", c->index, c->n);
		if (c->n == value)
		{
			return (c);
		}
	}

	return (NULL);
}
