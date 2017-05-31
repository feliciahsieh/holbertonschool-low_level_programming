#include "holberton.h"
#include <stddef.h>
/*#include <stdio.h>*/
/**
 * char *_strstr - locate a substring
 * @haystack: string to search
 * @needle: substring to find
 * Return: pointer to beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
/*printf("i:%d %c  j:%d :%c\n",i,haystack[i],j,needle[j]);*/
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	if (haystack[i] == '\0')
		return (NULL);

	return (NULL);
}
