#include "holberton.h"
/**
 * _strlen - returns the length of the string
 * @s: string to find length of
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
