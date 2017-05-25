#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - encode a string into rot13
 * @s: input string to encode
 * Return: rot13 string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (((s[i] >= 'A') && (s[i] <= 'M')) || ((s[i] >= 'a') && (s[i] <= 'm')))
			s[i] += 13;
		else
		if (((s[i] >= 'N') && (s[i] <= 'Z')) || ((s[i] >= 'n') && (s[i] <= 'z')))
			s[i] -= 13;
	}
	return (s);
}
