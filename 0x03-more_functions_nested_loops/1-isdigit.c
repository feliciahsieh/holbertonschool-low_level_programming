#include "holberton.h"

/**
 * _isdigit - checks if value is a digit
 *
 * Return: 1 if it's a digit. 0 if not
 */
int _isdigit(int c)
{
	int result;

	if ((c >= '0') && (c <= '9'))
	{
		result = 1;
	} else
	{
		result = 0;
	}

	return (result);
}
