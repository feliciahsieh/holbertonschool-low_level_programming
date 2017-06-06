#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: final string to contain original content and src
 * @src: string to append n characters to dest
 * @n: number of src characters to copy to dest
 * Return: combined string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] && (i < n); i++)
	{
		dest[len + i] = src[i];
	}

	if (!dest[len + i + 1])
		dest[len + i + 1] = '\0';

	return (dest);
}
