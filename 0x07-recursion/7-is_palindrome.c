#include "holberton.h"
/**
 * find_len - find length of string
 * @s: string to evaluate length
 * Return: length of string
 */
int find_len(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (find_len(s + 1) + 1);
}
/**
 * calcPal - calculate palindrome recursively
 * @start: char pointer to beginning of string
 * @end: char pointer to end of string
 * @count: number of times to check for a match
 * Return: length of string
 */
int calcPal(char *start, char *end, int count)
{
	int result = 0;

	if (count <= 1)
		return (1);

	if (start[0] == end[0])
	{
		start = start + 1;
		end = end - 1;
		count = count - 1;
		result = calcPal(start, end, count);
	}
	else
	{
		result = 0;
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
	int len = 0;
	int result = 0;
	char *strEnd;

	if (s[0] == '\0')
		return (0);

	len = find_len(s);

	strEnd = (s + len - 1);

	result = calcPal(s, strEnd, (len - 1) / 2);

	return (result);
}
