#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - generate key to hash table using djb2 algorithm
 * @key: key to use to calculate index
 * @size: size of hash table to compute the index
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);

	return (index % size);
}
