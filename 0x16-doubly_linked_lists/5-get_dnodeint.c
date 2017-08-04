#include <stdio.h>
#include "lists.h"

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
