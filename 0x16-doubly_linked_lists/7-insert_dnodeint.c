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
	dlistint_t *new = NULL;
	dlistint_t *curr = NULL;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;

	if (!h || (idx == 0))
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (*h);
	}

	curr = *h;
	while (curr && (count < idx))
	{
		count++;
		curr = curr->next;
	}
	curr = curr->prev;

	if (count == idx)
	{
		new->prev = curr;
		new->next = curr->next;
		curr->next = new;
		new->next->prev = new;
		return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}
}
