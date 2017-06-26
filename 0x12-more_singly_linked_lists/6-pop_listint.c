#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes head of node of a listint_t linked list
 * @head: head node of list
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int data;

	if (!(head && *head))
		return (0);

	temp = *head;

	data = (*head)->n;
	*head = (*head)->next;

	temp->next = NULL;
	free(temp);

	return (data);
}
