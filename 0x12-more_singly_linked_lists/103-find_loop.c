#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#define ERRORCODE 98
/**
 * print_listint_safe - prints a listint_t linked list and finds circular list
 * using Floyd's algorithm (tortoise and the hare)
 * @head: head of the linked list
 * Return: number of nodes in list
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare, *tortoise;

	if (head == NULL)
		return (NULL);
	tortoise = head;
	hare = head;
	while (1)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		if (hare == NULL)
		{ /* No loop found */
			printRemainingList(tortoise, hare);
			return (NULL);
		}
		hare = hare->next;
		if (hare == NULL)
		{
			printRemainingList(tortoise, hare);
			return (NULL);
		}
		hare = hare->next;
		tortoise = tortoise->next;
		if (hare == tortoise)
		{ /* Loop found */
			printRemainingList(tortoise, hare);
			return (tortoise);
		}
	}
	if (tortoise == hare)
	{
		printf("-> [%p] %d\n", (void *)hare, hare->n);
		return (tortoise);
	}
	return (NULL);
}
