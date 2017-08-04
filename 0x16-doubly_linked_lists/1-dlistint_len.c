#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - adds a new node at the end of a dlistint_t list
 * @h: head of doubly-linked list
 * Return: number of nodes in doubly-linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
