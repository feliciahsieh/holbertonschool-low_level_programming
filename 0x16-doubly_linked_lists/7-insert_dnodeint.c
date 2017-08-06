#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * create_dnode - creates new node
 * @n: data of node
 * @prev: link to prev node
 * @next: link to next node
 * Return: pointer to new node
 */
dlistint_t *create_dnode(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = next;
	return (new);
}

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of doubly-linked list
 * @index: index of node to retrieve starting at 0
 * Return: address of node or NULL if error
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *curr = head;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);

	while ((curr != NULL) && (count < index))
	{
		curr = curr->next;
		count++;
	}
	if ((count < index) || (curr == NULL))
		return (NULL);
	else
		return (curr);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of doubly-linked list
 * @idx: index for insertion of new node
 * @n: data for new node
 * Return: address of new node or NULL if error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *curr = *h, *localPrev = NULL;
	unsigned int count = 0;

	if ((!h && (idx != 0)) || !(*h))
		return (NULL);
	if (idx == 0)
	{
		if (!h)
		{
			*h = create_dnode(n, NULL, NULL);
		}
		else
		{
			(*h)->prev = create_dnode(n, NULL, *h);
			*h = (*h)->prev;
		}
		return (*h);
	}
	for (curr = *h; curr && (count < idx); curr = curr->next, count++)
	{
		localPrev = curr;
	}
	if ((count == idx) && (curr == NULL))
	{
		localPrev->next = create_dnode(n, localPrev, NULL);
		return (new);
	}
	if (curr == NULL)
		return (NULL);
	if (localPrev != NULL)
	{
		curr->next = create_dnode(n, curr, curr->next);
		curr->next->next->prev = curr->next;
	}
	return (curr->next);
}

