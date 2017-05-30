#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: string to search for character
 * @c: character to search in s string
 * Return: pointer to string location of char match
 */
char *_strchr(char *s, char c)
{
	int i, len;

	for (len = 0; s[len]; len++)
		;

	if (c == '\0')
		return ((s + len));
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
