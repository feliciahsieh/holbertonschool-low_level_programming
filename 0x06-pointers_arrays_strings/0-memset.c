#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: string to modify
 * @b: character to fill string
 * @n: number of "b" characters to fill string
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
