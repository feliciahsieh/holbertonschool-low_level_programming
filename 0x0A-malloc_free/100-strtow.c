#include <stdio.h>
#include "holberton.h"
/**
 * countWords - count number of words in string
 * @s: string to evaluate
 * Return: number of words
 */
int countWords(char *s)
{
	int i, isWord, num = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
			isWord = 0;
		else
		{
			if (isWord == 0)
				num++;
			isWord = 1;
		}
	}

	return (num);
}
/**
 * strtow - splits a string into words
 * @str: string to evaluate
 *
 * Return: pointer to array of chars
 */
char **strtow(char *str)
{
	char **ptr = NULL;
	char *temp = "";
	int nWords = 0;

	printf("%s\n", str);

	if ((str == NULL) || (str == temp))
		return (NULL);

	nWords = countWords(str);
	printf("nWords:%d\n", nWords);
	return (ptr);
}
