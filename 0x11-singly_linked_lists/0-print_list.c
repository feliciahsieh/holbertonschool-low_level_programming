#include <stdio.h>
#include "lists.h"
/**
 * main - prints all the elements of a list_t list
 *
 * Return: Always 0
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
