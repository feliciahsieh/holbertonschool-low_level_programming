#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - get the value associated with the key in the hash table
 * @ht: hash table
 * @key: key value of the (key, value) pair
 * Return: value of the (key, value) pair
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (!strcmp(key, "") || (ht == NULL))
		return (NULL);

	if (ht->array == NULL)
		return (NULL);

	
	ht->array[index];
}
