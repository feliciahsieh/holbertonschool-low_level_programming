#include "holberton.h"
/**
 * _strcmp - compares 2 strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: - 0 if same or integer of (s1[i] - s2[i]) otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}
