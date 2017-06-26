#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns number of elements in a listint_t list
 * @h: head of listint_t list
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
