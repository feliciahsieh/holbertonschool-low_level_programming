#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of doubly-linked list
 * @n: data inside node
 * Return: address of new node or NULL if error
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *dlist;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;

	dlist = *head;

	if (head && *head)
	{
		while (dlist->next != NULL)
		{
			dlist = dlist->next;
		}

		dlist->next = new;
		new->next = NULL;
		new->prev = dlist;
		dlist = new;
	}
	else
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
