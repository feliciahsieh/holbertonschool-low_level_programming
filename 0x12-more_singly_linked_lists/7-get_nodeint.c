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
	listint_t *current = NULL;
	unsigned int i = 0;

	while ((i < index) && (head->next != NULL))
	{
		if (head->next != NULL)
			head = head->next;
		i++;
	}

	if (i > (index + 1))
		return (NULL);
	else
		current = head;
	return (current);
}
