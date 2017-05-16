#include "holberton.h"

/**
 * _abs - finds the absolute value of an integer
 * @n: number to evaluate
 *
 * Return: n if n is greater than zero,
 * 0 if n is zero
 * absolute value of n if n is less than zero
 *
 */
int _abs(int n)
{
	int result;

	if (n > 0)
	{
		result = n;
	} else if (n < 0)
	{
		result = -n;
	} else
	{
		result = 0;
	}

	return (result);
}
