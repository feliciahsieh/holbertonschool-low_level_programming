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
	dlistint_t *temp = *head, *prev = NULL;
	unsigned int count = 0;

	if (!(head && *head))
		return (-1);
	if (index == 0)
	{
		temp = *head;
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	while (temp && (count < index))
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);
	if (prev != NULL)
	{
		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
		}
		temp->prev->next = temp->next;
	}
	temp->next = NULL;
	temp->prev = NULL;
	free(temp);
	return (1);
}
