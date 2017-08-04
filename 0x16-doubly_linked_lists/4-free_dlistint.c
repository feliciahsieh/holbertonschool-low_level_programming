#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: head of the doubly-linked list
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
