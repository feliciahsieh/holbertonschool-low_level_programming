#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - find value in sorted array of int using Jump Search
 * @list: pointer to the first element of the list to search
 * @size: number of elements in array
 * @value: data to search for
 * Return: pointer to node of value or NULL otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t st = sqrt(size), count = 0;
	listint_t *c = list, *prev = NULL, *p, *b;
	int edgeCase = 0;

	if ((size == 0) || (list == NULL) || (st >= size))
		return (NULL);
	while (c && (c->n <= value) && (c->index < size))
	{
		prev = b = c;
		count = 0;
		while (c && (count < st))
		{
			b = c;
			c = c->next;
			count++;
		}
		if (c == NULL)
		{
			c = b;
			edgeCase = 1;
			break;
		}
		printf("Value checked at index [%lu] = [%d]\n", c->index, c->n);
	}
	if (edgeCase)
	{
		printf("Value checked at index [%lu] = [%d]\n", b->index, b->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       prev->index, b->index);
	}
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       prev->index, c->index);
	for (p = prev; (p != NULL) && (p->index < (p->index + st)); p = p->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", p->index, p->n);
		if (p->n == value)
			return (p);
	}
	return (NULL);
}
