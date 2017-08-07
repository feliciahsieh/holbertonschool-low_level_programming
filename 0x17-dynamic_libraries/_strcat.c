#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: final string to contain original content and src
 * @src: string to append to dest
 * Return: combined string (new=dest+src)
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i + 1] = '\0';

	return (dest);
}
