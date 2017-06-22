#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free list_t list
 * @head: pointer to new list node
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *node;
	int i = 0;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
		printf("node:i:%d\n", i++);
	}
}
