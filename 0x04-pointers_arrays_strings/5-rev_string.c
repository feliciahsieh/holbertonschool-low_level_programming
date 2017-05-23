#include "holberton.h"
/**
 * rev_string - print and reverse string
 * @s: string to print and reverse
 * Return: none
 */
void rev_string(char *s)
{
	int length = 0, i = 0;

	while (s[i++])
		length++;

	for (i = 0; i < length / 2; i++)
	{
		s[length] = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = s[length];
	}
	s[length] = '\0';
}
