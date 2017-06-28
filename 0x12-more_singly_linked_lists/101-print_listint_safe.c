#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#define ERRORCODE 98
/**
 * printRemainingList - prints remaining nodes until tortoise meets hare
 * using Floyd's algorithm (tortoise and the hare)
 * @t: tortoise pointer
 * @h: hare pointer
 * Return: none
 */
void printRemainingList(const listint_t *t, const listint_t *h)
{
	while (t != h)
	{
		printf("xx[%p] %d\n", (void *)t, t->n);
		t = t->next;
	}
}

/**
 * print_listint_safe - prints a listint_t linked list and finds circular list
 * using Floyd's algorithm (tortoise and the hare)
 * @head: head of the linked list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *hare, *tortoise;
	size_t count = 0;

	if (head == NULL)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		exit(ERRORCODE);
	}
	tortoise = head;
	hare = head;
	while (1)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		if (hare == NULL)
		{
			printRemainingList(tortoise->next, hare);
			break;
		}
		hare = hare->next;
		if (hare == NULL)
		{
			printRemainingList(tortoise->next, hare);
			break;
		}
		hare = hare->next;
		tortoise = tortoise->next;
		if (hare == tortoise)
		{
			printRemainingList(tortoise, hare);
			break;
		}
		count++;
	}
	if (tortoise == hare)
	{
		printRemainingList(hare, tortoise);
		printf("-> [%p] %d\n", (void *)hare, hare->n);
		exit(ERRORCODE);
	}
	return (count);
}
