#include "holberton.h"
#include <stdio.h>
/**
 * char *_strstr - locate a substring
 * @haystack: string to search
 * @needle: substring to find
 * Return: pointer to beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, found = 0;

	for (i = 0; haystack[i] && !found; i++)
	{
		for (j = 0; needle[j] && !found; j++)
		{
			if (haystack[i] == needle[j])
			{
				found = 0;
				for (k = 0; needle[k]; k++)
				{
					if (haystack[i + k] == needle[j + k])
						found++;
				}
				if (found != k)
					found = 0;
				else
					found = 1;
			}
		}
	}
	return (haystack + i - 1);
}
