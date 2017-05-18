#include "holberton.h"

/**
 * _isupper - finds if c is upper case character
 *
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	int result;

	if ((c >= 'A') && (c <='Z'))
	{
		result = 1;
	} else
	{
		result = 0;
	}

	return (result);
}
