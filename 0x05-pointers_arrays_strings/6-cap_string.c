#include "holberton.h"
/**
 * cap_string - capitalize all words of a string
 * @a: string to camel case
 * Return: string with camel case
 */
char *cap_string(char *a)
{
	int i;

	if ((a[0] >= 'a') && (a[0] <= 'z'))
		a[0] -= 32;
	for (i = 1; a[i]; i++)
	{
		switch (a[i - 1])
		{
		case ' ':
		case '\n':
		case '\t':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			if ((a[i] >= 'a') && (a[i] <= 'z'))
				a[i] -= 32;
			break;
		default:
			break;
		}
	}
	return (a);
}
