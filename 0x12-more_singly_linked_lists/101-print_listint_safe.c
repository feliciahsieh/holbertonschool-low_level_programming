#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#define ERRORCODE 98
/**
 * print_listint_safe - prints a listint_t linked list and detects circular list
 * using Floyd's algorithm (tortoise and the hare)
 * @head: head of the linked list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *hare = NULL;
	const listint_t *tortoise = NULL;
	size_t count = 0;

	if (head == NULL)
	{
		printf("-> [%p] %d\n", (void *)head, ERRORCODE);
		exit(98);
	}
	tortoise = head;
	hare = tortoise->next->next;

	while ((void *)hare != (void *)tortoise)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		hare = hare->next->next;
		count++;
	}

	if (tortoise == hare)
	{
		/* Circular list detected */
		printf("-> [%p] %d\n", (void *)head, ERRORCODE);
		exit(98); /* Use echo $? on command line to verify */
	}

	return (count);
}
