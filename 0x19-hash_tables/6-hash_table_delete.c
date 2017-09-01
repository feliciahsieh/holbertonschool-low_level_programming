#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr = NULL, *prev = NULL;
	unsigned long int i = 0;

	if (ht)
	{
		if (ht->array)
		{
			for (i = 0; i < ht->size; i++)
			{
				if (ht->array[i])
				{
					curr = ht->array[i];
					while (curr)
					{
						prev = curr;
						free(prev->key);
						free(prev->value);
						free(prev);
						curr = curr->next;
					}
				}
			}
			free(ht->array);
		}
		free(ht);
	}
}
