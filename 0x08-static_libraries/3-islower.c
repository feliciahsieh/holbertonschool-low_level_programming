#include "holberton.h"

/**
 * _islower - checks for lower case characters
 * @c: variable to evaluate
 *
 * Return: 1 if it is lowercase, 0 if not
 *
 */
int _islower(int c) /* char c */
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	} else
	{
		result = 0;
	}
	return (result);
}
