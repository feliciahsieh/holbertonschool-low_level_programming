#include "holberton.h"
#include "string.h"
/**
 * _strchr - locates a character in a string
 * @s: string to search for character
 * @c: character to search in s string
 * Return: pointer to string location of char match
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	ptr = NULL;
	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			ptr = (s + i - 1);
	}

	return (ptr);
}
