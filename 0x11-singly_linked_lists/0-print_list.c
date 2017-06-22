#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list
 * Return: size of linked list
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
