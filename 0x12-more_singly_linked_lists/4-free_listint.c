#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free a listint_t list
 * @head: head of the listint_t list
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
/*
	if (head != NULL)
		return;

	if (head->next == NULL)
		free(head);

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
*/
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
