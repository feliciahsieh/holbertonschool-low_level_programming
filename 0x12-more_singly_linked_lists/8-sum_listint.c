#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sum all of the data of a listint_t linked list
 * @head: head of the linked list
 * Return: sum of the data in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}

	return (sum);
}
