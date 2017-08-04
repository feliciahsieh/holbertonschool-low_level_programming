#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while(h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return(count);
}
