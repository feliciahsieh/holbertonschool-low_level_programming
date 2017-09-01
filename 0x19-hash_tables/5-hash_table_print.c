#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print all elements of hash table
 * @ht: hash table
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr = NULL;
	unsigned long int i = 0;
	int commaFlag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				if (commaFlag)
				{
					printf(", ");
				}
				printf("'%s': '%s'", curr->key, curr->value);
				commaFlag = 1;
				curr = curr->next;
			}
		}
	}
	printf("}\n");
}
