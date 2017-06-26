#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add a new node at beginning of a listint_t list
 * @head: head of a listint_t list
 * @n: value to insert into element
 * Return: new head element of list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (head != NULL)
		new->next = *head;
	else
		new->next = NULL;
	*head = new;

	return (new);
}
