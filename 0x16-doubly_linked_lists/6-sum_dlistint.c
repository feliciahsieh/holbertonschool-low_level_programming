#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - return sum of all data a dlistint_t linked list
 * @head: head of doubly-linked list
 * Return: sum data in nodes in doubly-linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
