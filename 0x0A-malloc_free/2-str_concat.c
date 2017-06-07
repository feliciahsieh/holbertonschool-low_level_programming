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
	int i, j, k = 0;

	if ((s1 == NULL) && (s2 == NULL))
		return (ptr);

	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;

	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (k = 0; s1 && s1[k]; k++)
		ptr[k] = s1[k];
	ptr[k] = '\0';

	for (k = 0; s2 && s2[k]; k++)
		ptr[i + k] = s2[k];
	ptr[i + k] = '\0';

	return (ptr);
}
