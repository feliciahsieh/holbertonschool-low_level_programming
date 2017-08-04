#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the end of a dlistint_t list
 * @head: head of doubly-linked list
 * @n: data inside node
 * Return: address of new node or NULL if error
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;

	if (head && *head)
	{
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
