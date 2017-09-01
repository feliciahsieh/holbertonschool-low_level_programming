#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to use
 * @key: hash table key. Cannot be an empty string
 * @value: value associated with the key. Cannot be an empty string
 * Return: 1 if success. 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n = NULL;
	unsigned long int index = 0;

	if (!strcmp(key, "") || !strcmp(value, ""))
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
		return (0);
	n->key = (char *)key;
	n->value = (char *)value;
	n->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = n;
	else
	{
		n->next = ht->array[index];
		ht->array[index] = n;
	}

	return (1);
}
