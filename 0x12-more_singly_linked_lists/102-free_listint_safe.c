#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - free a listint_t list and sets head to NULL
 * @h: head of the listint_t list
 * Return: none
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	listint_t *current;
	size_t count = 0;
	listint_t *hare = NULL;
	listint_t *tortoise = NULL;

	tortoise = tortoise;
	hare = hare;

	if (h && *h)
	{
		current = *h;
		while (current != NULL)
		{
			temp = current->next;
			current->next = NULL;
			free(current);
			current = temp;
			count++;
		}
	}

	*h = NULL;

	return (count);
}
