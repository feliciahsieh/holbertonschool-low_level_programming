#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a listint_t linked list
 * @head: head node of list
 * @index: index of node to return
 * Return: pointer to node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	if (current == NULL)
		return (NULL);

	while ((i < index) && (current != NULL))
	{
		current = current->next;
		i++;
	}


	if (i > index)
		return (NULL);

	return (current);
}
