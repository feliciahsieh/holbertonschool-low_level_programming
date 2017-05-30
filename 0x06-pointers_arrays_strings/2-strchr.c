#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string to search for character
 * @c: character to search in s string
 * Return: pointer to string location of char match
 */
char *_strchr(char *s, char c)
{
	int i, len;
	char *ptr = NULL;

	if (c != '\0')
	{
		for (len = 0; s[len] != '\0'; len++)
			;

		for (i = 0; i < len; i++)
		{
			if (s[i] == c)
			{
				ptr = (s + i);
				printf("i:%d  s[i]:%c\n",i,s[i]);
				break;
			}
		}
	}		
	return (ptr);
}
