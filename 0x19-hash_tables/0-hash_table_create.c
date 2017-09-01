#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "hash_tables.h"

/**
 * hash_table_create - create hash table struct
 * @size: size of array indexes (pointers to hash_node_t)
 * Return: struct to hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h = NULL;
	hash_node_t **hash = NULL;
	unsigned long int i = 0;

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

	for (i = 0; i < size; i++)
	{
		hash[i] = NULL;
	}

	h->size = size;
	h->array = hash;
	return (h);
}
