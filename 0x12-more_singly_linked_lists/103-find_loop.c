#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#define ERRORCODE 98
/**
 * find_listint_loop - prints a listint_t linked list and finds circular list
 * using Floyd's algorithm (tortoise and the hare)
 * @head: head of the linked list
 * Return: address of beginning of loop or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *hare, *tortoise, *temp;
	size_t count = 0;

	if (head == NULL)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		exit(ERRORCODE);
	}
	tortoise = head;
	hare = head;
	temp = head;
	while (1)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		if (hare == NULL) /* No loop found */
			break;
		hare = hare->next;
		if (hare == NULL) /* No loop found */
			break;
		hare = hare->next;
		tortoise = tortoise->next;
		if (hare == tortoise) /* Loop found */
			break;
	}
	if (tortoise == hare)
	{	/* Circular list detected */
		printf("DETECTED\nt:%p h:%p\n", (void *)tortoise, (void *)hare);
		tortoise = temp;
		while ((tortoise != hare) && (count < 9))
		{
			printf("t:%p %d h:%p %d\n", (void *)tortoise, tortoise->n, (void *)hare, hare->n);
			tortoise = tortoise->next;
			hare = hare->next;
			count++;
		}
		printf("-> [%p] %d\n", (void *)hare, hare->n);
		return ((listint_t *)hare);
	}
	return (NULL);
}
