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
	skiplist_t *c = list, *prev = NULL, *pp = NULL;
	int edgecase;

	edgecase = 0;
	if (list == NULL)
		return (NULL);
	if (value < c->n)
		return (NULL);
	while (c && (c->n <= value) && !edgecase)
	{
		prev = c;
		c = c->express;
		if (c == NULL)
		{
			edgecase = 1;
			c = prev;
			for (pp = c; pp->next; pp = pp->next)
				;
		}
		if (!edgecase)
			printf("Value checked at index [%lu] = [%d]\n",
			       c->index, c->n);
	}
	if (!edgecase)
		printf("Value found between indexes [%lu] = [%lu]\n",
		       prev->index, c->index);
	else
		printf("Value found between indexes [%lu] = [%lu]\n",
		       c->index, pp->index);
	for (c = prev; c; c = c->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", c->index, c->n);
		if (c->n == value)
			return (c);
	}
	return (NULL);
}
