#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * findLen - find length of string
 * @s: string to find length
 * Return: number of chars
 */
int findLen(char *s)
{
	int i, l = 0;

	for (i = 0; s[i]; i++)
		l++;
	return (l);
}
/**
 * str_concat - concatenates two strings
 * @s1: string1 to concat
 * @s2: string2 to concat
 * Return: ptr to concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int i, len = 0, len2 = 0;

	if (s1 == NULL)
	{
		if (s2 == NULL)
			return (NULL);

		len = findLen(s2);
		ptr = (char *)malloc((len + 1) * sizeof(char));
		for (i = 0; i <= len; i++)
			ptr[i] = s2[i];
	} else
	{
		if (s2 == NULL)
		{
			len = findLen(s1);
			ptr = (char *)malloc((len + 1) * sizeof(char));
			for (i = 0; i <= len; i++)
				ptr[i] = s1[i];
		} else
		{
			len = findLen(s1);
			len2 = findLen(s2);

			ptr = (char *)malloc((len + len2 + 1) * sizeof(char));
			for (i = 0; i < len; i++)
				ptr[i] = s1[i];
			for (i = 0; i <= len2; i++)
				ptr[len + i] = s2[i];
		}
	}

	return (ptr);
}
