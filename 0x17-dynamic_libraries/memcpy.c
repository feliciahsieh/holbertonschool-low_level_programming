#include "holberton.h"
/**
 * _memcpy - fills memory with a constant byte
 * @dest: string to modify
 * @src: string to copy to dest string
 * @n: number of src characters to fill string
 * Return: dest string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
