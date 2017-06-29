#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list and finds circular list
 * using Floyd's algorithm (tortoise and the hare)
 * @head: head of the linked list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0, j = 0;
	void *p[200];

	if (head == NULL)
		return (0);
	for (size = 0; head != NULL; size++)
	{
		for (j = 0; j < size; j++)
		{
			if (p[j] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (size);
			}
		}
		p[j] = (void *)head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (size);
}
