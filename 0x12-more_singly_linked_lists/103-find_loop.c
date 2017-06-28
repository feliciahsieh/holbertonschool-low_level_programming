#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#define ERRORCODE 98
/**
 * find_listint_loop - finds the loop in a linked list
 * using Floyd's algorithm (tortoise and the hare). Use only 2 variables
 * @head: head of the linked list
 * Return: address of the start of the loop or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = NULL;
	const listint_t *tortoise = NULL;

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
