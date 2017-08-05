#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of doubly-linked list
 * @idx: index for insertion of new node
 * @n: data for new node
 * Return: address of new node or NULL if error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *curr = *h;
	unsigned int count = 0;

	if (!h && (idx != 0))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (!h)
			new->next = NULL;
		else
		{
			*h->prev = new;
			new->next = *h;
		}
		new->prev = NULL;
		*h = new;
		return (*h);
	}
	for (curr = *h; curr && (count < idx); curr = curr->next, count++)
		;
	curr = curr->prev;
	if ((count == idx) && (curr == NULL))
	{
		new->prev = curr;
		new->next = curr->next;
		curr->next = new;
		new->next->prev = new;
		return (new);
	}
	if (curr == NULL)
	{
		free(new);
		return (NULL);
	}
}
