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
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while ((temp != NULL) && (i < idx))
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL) || (temp->next == NULL))
	{
		free(new);
		return (NULL);
	}
	if (prev != NULL)
	{
		prev->next = new;
		new->next = temp;
	}
	return (new);
}
