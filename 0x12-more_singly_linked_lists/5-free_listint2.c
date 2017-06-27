#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free a listint_t list and sets head to NULL
 * @head: head of the listint_t list
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head && *head)
	{
		while (*head != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
	}

	head = NULL;
}
