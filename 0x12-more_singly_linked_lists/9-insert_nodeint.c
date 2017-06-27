#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node a given position
 * @head: head of the linked list
 * @idx: index to insert the new node
 * @n: data in the new node
 * Return: new node or NULL (if not possible)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int index = 0;

	if (!(head && *head))
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (temp->next != NULL && (idx != index))
	{
		prev = temp;
		temp = temp->next;
		index++;
	}
	if (index > idx)
	{
		free(new);
		return (NULL);
	}

	prev->next = new;
	new->next = temp;

	return (new);
}
