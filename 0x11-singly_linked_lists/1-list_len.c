#include <stdlib.h>
#include "lists.h"

/**
 * mystrcpy - copy string from source to dest
 * @src: source string
 * @dest: destination string
 * Return: dest string
 */
char *mystrcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * mystrlen - find string length
 * @s: string
 * Return: string length
 */
unsigned int mystrlen(const char *s)
{
	unsigned int n;

	n = 0;
	while (s[n])
	{
		n++;
	}
	return (n);
}

/**
 * strdup - string duplicate
 * @s: string to duplicate
 * Return: new duplicated string
 */
char *strdup(char *s)
{
	char *d;

	d = malloc(mystrlen(s) + 1);

	if (d == NULL)
		return (NULL);

	mystrcpy(d, s);

	return (d);
}
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
