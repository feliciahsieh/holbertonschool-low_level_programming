#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * findWordLeng - find length of first word after index
 * @s: string to evaluate
 * @index: index to start looking for word
 * Return: find length of word
 */
int findWordLeng(char *s, int index)
{
	int i, len = 0, found = 0;

	for (i = index; s[i]; i++)
	{
		if (s[i] != ' ')
		{
			len++;
			found = 1;
		}
		else if (s[i] == ' ' && found)
			break;
	}
	return (len);
}
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
	int nWords = 0, i, j, l = 0, x = 0, y = 0;

	if ((str == NULL) || (*str == '\0'))
		return (NULL);
	nWords = countWords(str), ptr = malloc((nWords + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[nWords] = NULL;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			l = findWordLeng(str, i);
			if (x < nWords)
			{
				ptr[x] = malloc((l + 1) * sizeof(char));
				if (ptr[x] == NULL)
				{
					while (x >= 0)
						free(ptr[--x]);
					free(ptr);
					return (NULL);
				}
				x++;
			}
			i = i + l;
		}
	}
	j = 0, x = 0;
	while (x < nWords)
	{
		for (; str[j] && (str[j] == ' '); j++) ;
		y = 0;
		for (i = j; str[i] && (str[i] != ' '); i++)
			ptr[x][y++] = str[i];
		ptr[x][y] = '\0';
		j = j + y, x++;
	}
	return (ptr);
}
