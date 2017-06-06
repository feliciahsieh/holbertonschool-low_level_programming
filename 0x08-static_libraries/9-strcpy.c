#include "holberton.h"
/**
 * _strcpy - copies src string to dest string
 * @dest: destination string
 * @src: source string
 * Return: none
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0, i;

	while (src[length])
		length++;

	for (i = 0; i <= length - 1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
