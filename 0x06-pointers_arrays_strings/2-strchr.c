#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string to search for character
 * @c: character to search in s string
 * Return: pointer to string location of char match
 */
char *_strchr(char *s, char c)
{
	int i, len;
	char *ptr;

	for (len = 0; s[len]; len++)
		;

	ptr = NULL;
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			ptr = (s + i);
			break;
		}
	}

	return (ptr);
}
