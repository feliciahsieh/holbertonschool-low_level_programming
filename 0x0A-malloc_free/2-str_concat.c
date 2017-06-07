#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: string1 to concat first
 * @s2: string2 to concat second
 * Return: ptr to concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = '\0';
	int len1 = 0, len2 = 0, i, j;

	if ((s1 == NULL) && (s2 == NULL))
		return (ptr);

	for (i = 0; s1[i]; i++)
		len1++;

	for (j = 0; s2[j]; j++)
		len2++;

	ptr = malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (ptr);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	ptr[i] = '\0';

	if (len2 > 1)
		for (j = 0; s2[j]; j++)
			ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
