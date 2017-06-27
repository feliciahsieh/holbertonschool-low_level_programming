#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#define LISTSUCCESS 1
#define LISTFAIL -1
/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: head of the linked list
 * @index: index to delete the new node
 * Return: 1 if success or -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
	listint_t *temp = *head;
	unsigned int i = 0;

	if (!(head && *head))
		return (LISTFAIL);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (LISTSUCCESS);
	}

	while ((temp != NULL) && (i < index))
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if ((temp == NULL) || (temp->next == NULL))
		return (LISTFAIL);

	/* check if at beginning of list */
	if (prev != NULL)
	{
		prev->next = temp->next;
	}

	temp->next = NULL;
	free(temp);

	return (LISTSUCCESS);
}
