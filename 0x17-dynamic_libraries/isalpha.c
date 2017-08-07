#include "holberton.h"

/**
 * _isalpha - checks if char is [A-Za-z]
 * @c: variable to evaluate
 *
 * Return: 1 if it is in [A-Za-z], 0 if not
 *
 */
int _isalpha(int c) /* char c */
{
	int result;

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		result = 1;
	} else
	{
		result = 0;
	}
	return (result);
}
