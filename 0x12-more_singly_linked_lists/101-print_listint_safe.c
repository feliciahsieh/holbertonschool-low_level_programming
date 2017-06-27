#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of hte linked list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
	{
		exit(98);
	}

	printf("hello\n");
	while (head != NULL)
	{
		printf("in while loop  i:%ud\n", count);
		count++;
		head = head->next;
	}

	return (count);
}
