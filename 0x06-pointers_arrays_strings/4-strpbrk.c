#include "holberton.h"
#include <stdio.h>
/**
 * char *_strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string for matching
 * Return: location of first match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				goto outerloop;
		}
	}
outerloop:
	return (s + i);
}
