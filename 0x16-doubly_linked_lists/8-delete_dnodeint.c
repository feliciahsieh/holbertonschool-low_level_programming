#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * @head: head of doubly-linked list
 * @index: index for deletion of node
 * Return: 1 if success, 0 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = NULL;
	unsigned int count = 0;

	if ((*head == NULL) || (head == NULL))
	{
		return (-1);
	}

	if (index == 0)
	{
		curr = *head;
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(curr);
		return (1);
	}

	curr = *head;
	while (curr && (count < index))
	{
		count++;
		curr = curr->next;
	}

	if (curr != NULL)
	{
		curr->next->prev = curr->prev;
		curr->prev->next = curr->next;
	}
	free(curr);
	return (1);
}
