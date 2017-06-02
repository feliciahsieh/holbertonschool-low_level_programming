#include "holberton.h"
/**
 * findLen - find length of string
 * @s: string to evaluate length
 * Return: length of string
 */
int findLen(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (findLen(s + 1) + 1);
}
/**
 * calcPal - calculate palindrome recursively
 * @start: char pointer to beginning of string
 * @end: char pointer to end of string
 * Return: length of string
 */
int calcPal(char *start, char *end)
{
	int result = 0;

	if (start == end) /* reached middle of odd string */
		return (1);
	else if ((start + 1) == end) /* even string */
	{
		if (start[0] == end[0])
			return (1);
		else
			return (0);
	}
	else
	{
		if (start[0] == end[0])
			result = calcPal(start + 1, end - 1);
		else
			return (0);
	}
	return (result);
}

/**
 * is_palindrome - determine if string is a palindrome
 * @s: string to evaluate if palindrome
 * Return: 1 if s is a palindrome. 0 if not
 */
int is_palindrome(char *s)
{
	int result = 0;
	int len = 0;
	char *strEnd;

	len = findLen(s);
	strEnd = s + len;

	if (len <= 1)
		result = 1;
	else
		result = calcPal(s, strEnd - 1);

	return (result);
}
