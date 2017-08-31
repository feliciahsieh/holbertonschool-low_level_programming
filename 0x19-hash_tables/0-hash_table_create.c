#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h = NULL;
	hash_node_t *hash = NULL;

	if (size == ULONG_MAX)
		return (NULL);

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);

	hash = malloc(size * sizeof(hash_node_t *));
	if (hash == NULL)
	{
		free(h);
		return (NULL);
	}

	h->size = size;
	h->array = &hash;
	return (h);
}
